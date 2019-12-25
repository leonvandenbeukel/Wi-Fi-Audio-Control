/*
 * Based on Martin van den Beukel's code to Boot Adau1701 via i2c from an Arduino Nano 5V 16MHz and send different parameters to the ADAU
 * This also seems to works for ESP8266. Translated some comments to English and added writeSigmaRegisterBassGain and writeSigmaRegisterEQ
 */
#include "Arduino.h"
#include <Wire.h>
#include "Equalizer.h"
#define paramLength 4
byte paramData[paramLength];

/*
 * Implementation of the macro/function defined in "SigmaStudioFW.h" to write a memory block to the Adau1701 via i2c
 * 
 * Datatypes of the parameters are determined by the header files from SigmaStudio and info from https://www.arduino.cc: 
 * - byte for 8 bits and - short for 16 bits.
 *
 * Check http://www.audiodevelopers.com/5-the-microprocessor-how-to-control-the-dsp/ for an example.
 * Wire.beginTranmission shifts the devAddress 1 bit to the left. That's why shift 1 time to the right the first time
 */
void Sigma_write_register_block(byte devAddress, short address, short dataLength, const byte *data ) {
  int dataType = 0;

  if( address == 0 ) {
    // parameter data starts at address 0x0000; 4 bytes data word
    dataType = 4;
  } else {
    // program dat starts at address 0x0400; 5 bytes data word
    dataType = 5;
  }
  // short = 16 bits = needed to address each byte:
  for( short x = 0; x < dataLength; x++ ) {
    Wire.beginTransmission(devAddress >> 1);
    Wire.write(highByte(address));
    Wire.write(lowByte(address));
    for( short y = 0; y < dataType; y++ ) {
      // use pgm_read_byte_near() to read from the program space
      byte dataByte = pgm_read_byte_near(data+x+y);
      Wire.write(dataByte);
    }
    Wire.endTransmission();
    // next address of adau parameter or program memory
    address++;
    // skip the bytes in data[] that are send in the inner for loop
    x = x + dataType - 1;
  }
}

// Implementation of the macro/function defined in "SigmaStudioFW.h" to write to the Adau1701 via i2c
// Note that this is a direct write, not using the safeload registers.
// Note that the arduino has an i2c buffer of 32 bytes; the dataLength must be less than that.
void Sigma_write_register(byte devAddress, short address, short dataLength, byte *data ) {
  Wire.beginTransmission(devAddress >> 1);
  Wire.write(highByte(address));
  Wire.write(lowByte(address));
  for( short x = 0; x < dataLength; x++ ) {
    Wire.write(data[x]);
  }
  Wire.endTransmission();
}

// Implementation of the macro/function defined in "SigmaStudioFW.h" to convert an integer to the 5.23 format of the Adau1701
void Sigmastudiotype_integer_convert( int32_t value ) {
  //still empty
}

// Implementation of the macro/function defined in "SigmaStudioFW.h" to convert a float to the 5.23 format of the Adau1701
void Sigmastudiotype_fixpoint_convert( float value ) {
  int32_t paramValue = (int32_t)( value * (1L << 23) );
  paramData[3] = paramValue & 0xFF;
  paramData[2] = (paramValue >> 8) & 0xFF;
  paramData[1] = (paramValue >> 16) & 0xFF;
  paramData[0] = (paramValue >> 24) & 0xFF;
}

void writeSigmaRegisterBassGain(byte devAddress, short address, String value) {
  int ival = value.toInt();
  long lval = map(ival, 0, 65, 1, 1995);
  float fval = lval / 1000.0;
    
  Sigmastudiotype_fixpoint_convert(fval);
  Sigma_write_register(devAddress, address, paramLength, paramData);
}

void writeSigmaRegisterBassGainSafe(byte devAddress, String value) {

  // Write the data to the ADAU1401 safe load data registers (starting at 0x0810 to 0x0814 according to the datasheet)
  int ival = value.toInt();
  long lval = map(ival, 0, 65, 1, 1995);
  float fval = lval / 1000.0;    
  Sigmastudiotype_fixpoint_convert(fval);
  Sigma_write_register(devAddress, 0x0810, paramLength, paramData);
  //Sigma_write_register(devAddress, 0x0811, paramLength, paramData);
  
  // Write the addresses to write to, to the ADAU1401 safe load address registers (starting at 0x0815 to 0x0819 according to the datasheet)
  Sigmastudiotype_fixpoint_convert(1);
  Sigma_write_register(devAddress, 0x0815, paramLength, paramData);
  //Sigmastudiotype_fixpoint_convert(1);
  //Sigma_write_register(devAddress, 0x0816, paramLength, paramData);

  // Finally write transfer control bit to the core control register (register 0x081C bit D5 according to the datasheet)
  short IST = 60; // REG_COREREGISTER_IC_1_VALUE | 1 << 5 --> 60 (0x3C)
  Sigmastudiotype_fixpoint_convert(60);
  Sigma_write_register(devAddress, 0x081C, paramLength, paramData);

//  // Gain LEFT
//  Wire.beginTransmission(devAddress >> 1);
//  // address
//  Wire.write(0x00);
//  Wire.write(0x00);
//  // data
//  Wire.write(0x00);
//  Wire.write(0x00);
//  Wire.write(0x20);
//  Wire.write(0xC5);
//  Wire.endTransmission();  
//
//  // Gain RIGHT
//  Wire.beginTransmission(devAddress >> 1);
//  // address
//  Wire.write(0x00);
//  Wire.write(0x01);
//  // data
//  Wire.write(0x00);
//  Wire.write(0x00);
//  Wire.write(0x20);
//  Wire.write(0xC5);
//  Wire.endTransmission();  
//
//  delay(2000);
//
//   // Gain LEFT
//  Wire.beginTransmission(devAddress >> 1);
//  // address
//  Wire.write(0x00);
//  Wire.write(0x00);
//  // data
//  Wire.write(0x00);
//  Wire.write(0x00);
//  Wire.write(0x67);
//  Wire.write(0x9F);
//  Wire.endTransmission();  
//
//  // Gain RIGHT
//  Wire.beginTransmission(devAddress >> 1);
//  // address
//  Wire.write(0x00);
//  Wire.write(0x01);
//  // data
//  Wire.write(0x00);
//  Wire.write(0x00);
//  Wire.write(0x67);
//  Wire.write(0x9F);
//  Wire.endTransmission();  
  
}

void writeSigmaRegisterEQ(byte devAddress, short baseAddress, byte band, byte value) {

  Sigma_write_register(devAddress, baseAddress + (band * 5) + 0, 4, bands[band][value][0]);
  Sigma_write_register(devAddress, baseAddress + (band * 5) + 1, 4, bands[band][value][1]);
  Sigma_write_register(devAddress, baseAddress + (band * 5) + 2, 4, bands[band][value][2]);
  Sigma_write_register(devAddress, baseAddress + (band * 5) + 3, 4, bands[band][value][3]);
  Sigma_write_register(devAddress, baseAddress + (band * 5) + 4, 4, bands[band][value][4]);
  
}
