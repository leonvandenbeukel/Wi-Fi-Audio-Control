/*
 * Based on Martin van den Beukel's code to Boot Adau1701 via i2c from an Arduino Nano 5V 16MHz and send different parameters to the ADAU
 * 
 * This code also works for an ESP8266
 * 
 */

#include "Arduino.h"
#include <Wire.h>

// To change values of parameters in parameter data of the Adau1701 in runtime, see loop()
#define paramLength 4
byte paramData[paramLength];


// The adau program contains a stereo gain with a range from -60 dB to +6 dB: gainMin = 10^(-60/20) and gainMax = 10^(6/20)
float gainMin = 0.0010000467300415;
float gainMax = 1.99526226520538;

// Implementation of the macro/function defined in "SigmaStudioFW.h" to write a memory block to the Adau1701 via i2c
/*
 * De datatypes van de parameters zijn bepaald aan de hand van de header files uit SigmaStudio en 
 * de informatie op https://www.arduino.cc : - byte voor 8 bits en - short voor 16 bits.
 *
 * Zie http://www.audiodevelopers.com/5-the-microprocessor-how-to-control-the-dsp/ voor een voorbeeld.
 * 
 * Ik weet niet waarom, maar Wire.beginTranmission schuift het devAddress 1 bit naar links. Daarom eerst een keer naar rechts
 * 
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

void writeSigmaRegister(byte devAddress, short address, String value) {

  int ival = value.toInt();
  long lval = map(ival, 0, 33, 1, 1995);
  float fval = lval / 1000.0;
    
  Sigmastudiotype_fixpoint_convert(fval);
  Sigma_write_register(devAddress, address, paramLength, paramData);
}
