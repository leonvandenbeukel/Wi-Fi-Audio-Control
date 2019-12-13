/*
  Generated Fixed Point Table Generator (Menu Tools) in SigmaStudio and copied to this file
  The Tab Peaking - Low - High Shelf is used, settings:
  Boost min: -10, Boost Max: 10, Number of Steps: 21 (-10 to +10 and mind the 0 also counts)
  Frequencies: 100, 500, 1000, 2000, 5000, 8000
  Q: 0.71
  Change Peaking, High Shelf and Low Shelf according to the settings of the frequency settings (click little symbol on top of the eq)

  When 'Show values' is checked and click 'Generate' you can see something like this:

    Boost=-10
    b0=0.992906451225281,  0x00 ,  0x7F ,  0x17 ,  0x8F ,  
    b1=-1.96762752532959, 0xFF ,  0x04 ,  0x24 ,  0xC8 ,  
    b2=0.974833488464355, 0x00 ,  0x7C ,  0xC7 ,  0x58 ,  
    a1=1.96750617027283,  0x00 ,  0xFB ,  0xD7 ,  0x3E ,  
    a2=-0.967861294746399,  0xFF ,  0x84 ,  0x1D ,  0x1F ,  
    ...
    
  Uncheck 'Show values' and click generate (6x).

 */

/*
 * 6  = nr of bands
 * 21 = value of eq
 * 5  = there are 5 registers that has to be set (B0, B1, B2, A1, A2)
 * 4  = 4 bytes has to be set to every register
 */

// Copy this code to Equalizer.h
byte bands[6][21][5][4] = 
{
  {
    {
      { 0x00 ,  0x7F ,  0x17 ,  0x8F },
      { 0xFF ,  0x04 ,  0x24 ,  0xC8 },
      { 0x00 ,  0x7C ,  0xC7 ,  0x58 },
      { 0x00 ,  0xFB ,  0xD7 ,  0x3E },
      { 0xFF ,  0x84 ,  0x1D ,  0x1F },
    },{
      { 0x00 ,  0x7F ,  0x30 ,  0x32 },
      { 0xFF ,  0x04 ,  0x02 ,  0x8B },
      { 0x00 ,  0x7C ,  0xD1 ,  0x29 },
      { 0x00 ,  0xFB ,  0xF9 ,  0xE9 },
      { 0xFF ,  0x83 ,  0xFB ,  0x19 },
    },{
      { 0x00 ,  0x7F ,  0x48 ,  0x62 },
      { 0xFF ,  0x03 ,  0xE1 ,  0xE3 },
      { 0x00 ,  0x7C ,  0xD9 ,  0xDD },
      { 0x00 ,  0xFC ,  0x1A ,  0xFD },
      { 0xFF ,  0x83 ,  0xDA ,  0xA1 },
    },{
      { 0x00 ,  0x7F ,  0x60 ,  0x2C },
      { 0xFF ,  0x03 ,  0xC2 ,  0xBB },
      { 0x00 ,  0x7C ,  0xE1 ,  0x7A },
      { 0x00 ,  0xFC ,  0x3A ,  0x8E },
      { 0xFF ,  0x83 ,  0xBB ,  0xA3 },
    },{
      { 0x00 ,  0x7F ,  0x77 ,  0x9E },
      { 0xFF ,  0x03 ,  0xA5 ,  0x00 },
      { 0x00 ,  0x7C ,  0xE8 ,  0x06 },
      { 0x00 ,  0xFC ,  0x58 ,  0xB0 },
      { 0xFF ,  0x83 ,  0x9E ,  0x0C },
    },{
      { 0x00 ,  0x7F ,  0x8E ,  0xC5 },
      { 0xFF ,  0x03 ,  0x88 ,  0xA0 },
      { 0x00 ,  0x7C ,  0xED ,  0x86 },
      { 0x00 ,  0xFC ,  0x75 ,  0x76 },
      { 0xFF ,  0x83 ,  0x81 ,  0xCA },
    },{
      { 0x00 ,  0x7F ,  0xA5 ,  0xB0 },
      { 0xFF ,  0x03 ,  0x6D ,  0x89 },
      { 0x00 ,  0x7C ,  0xF1 ,  0xFD },
      { 0x00 ,  0xFC ,  0x90 ,  0xF0 },
      { 0xFF ,  0x83 ,  0x66 ,  0xCC },
    },{
      { 0x00 ,  0x7F ,  0xBC ,  0x6B },
      { 0xFF ,  0x03 ,  0x53 ,  0xAC },
      { 0x00 ,  0x7C ,  0xF5 ,  0x6F },
      { 0x00 ,  0xFC ,  0xAB ,  0x30 },
      { 0xFF ,  0x83 ,  0x4D ,  0x02 },
    },{
      { 0x00 ,  0x7F ,  0xD3 ,  0x04 },
      { 0xFF ,  0x03 ,  0x3A ,  0xFA },
      { 0x00 ,  0x7C ,  0xF7 ,  0xDD },
      { 0x00 ,  0xFC ,  0xC4 ,  0x44 },
      { 0xFF ,  0x83 ,  0x34 ,  0x5D },
    },{
      { 0x00 ,  0x7F ,  0xE9 ,  0x86 },
      { 0xFF ,  0x03 ,  0x23 ,  0x63 },
      { 0x00 ,  0x7C ,  0xF9 ,  0x4A },
      { 0x00 ,  0xFC ,  0xDC ,  0x3C },
      { 0xFF ,  0x83 ,  0x1C ,  0xCE },
    },{
      { 0x00 ,  0x80 ,  0x00 ,  0x00 },
      { 0xFF ,  0x03 ,  0x0C ,  0xDC },
      { 0x00 ,  0x7C ,  0xF9 ,  0xB7 },
      { 0x00 ,  0xFC ,  0xF3 ,  0x24 },
      { 0xFF ,  0x83 ,  0x06 ,  0x49 },
    },{
      { 0x00 ,  0x80 ,  0x16 ,  0x7E },
      { 0xFF ,  0x02 ,  0xF7 ,  0x56 },
      { 0x00 ,  0x7C ,  0xF9 ,  0x23 },
      { 0x00 ,  0xFD ,  0x09 ,  0x0B },
      { 0xFF ,  0x82 ,  0xF0 ,  0xC0 },
    },{
      { 0x00 ,  0x80 ,  0x2D ,  0x0C },
      { 0xFF ,  0x02 ,  0xE2 ,  0xC7 },
      { 0x00 ,  0x7C ,  0xF7 ,  0x8E },
      { 0x00 ,  0xFD ,  0x1D ,  0xFC },
      { 0xFF ,  0x82 ,  0xDC ,  0x28 },
    },{
      { 0x00 ,  0x80 ,  0x43 ,  0xB8 },
      { 0xFF ,  0x02 ,  0xCF ,  0x22 },
      { 0x00 ,  0x7C ,  0xF4 ,  0xF7 },
      { 0x00 ,  0xFD ,  0x32 ,  0x02 },
      { 0xFF ,  0x82 ,  0xC8 ,  0x75 },
    },{
      { 0x00 ,  0x80 ,  0x5A ,  0x90 },
      { 0xFF ,  0x02 ,  0xBC ,  0x5E },
      { 0x00 ,  0x7C ,  0xF1 ,  0x5B },
      { 0x00 ,  0xFD ,  0x45 ,  0x29 },
      { 0xFF ,  0x82 ,  0xB5 ,  0x9D },
    },{
      { 0x00 ,  0x80 ,  0x71 ,  0x9F },
      { 0xFF ,  0x02 ,  0xAA ,  0x71 },
      { 0x00 ,  0x7C ,  0xEC ,  0xB8 },
      { 0x00 ,  0xFD ,  0x57 ,  0x7B },
      { 0xFF ,  0x82 ,  0xA3 ,  0x95 },
    },{
      { 0x00 ,  0x80 ,  0x88 ,  0xF4 },
      { 0xFF ,  0x02 ,  0x99 ,  0x50 },
      { 0x00 ,  0x7C ,  0xE7 ,  0x09 },
      { 0x00 ,  0xFD ,  0x69 ,  0x02 },
      { 0xFF ,  0x82 ,  0x92 ,  0x55 },
    },{
      { 0x00 ,  0x80 ,  0xA0 ,  0x9D },
      { 0xFF ,  0x02 ,  0x88 ,  0xF4 },
      { 0x00 ,  0x7C ,  0xE0 ,  0x4A },
      { 0x00 ,  0xFD ,  0x79 ,  0xC6 },
      { 0xFF ,  0x82 ,  0x81 ,  0xD3 },
    },{
      { 0x00 ,  0x80 ,  0xB8 ,  0xA7 },
      { 0xFF ,  0x02 ,  0x79 ,  0x54 },
      { 0x00 ,  0x7C ,  0xD8 ,  0x76 },
      { 0x00 ,  0xFD ,  0x89 ,  0xD1 },
      { 0xFF ,  0x82 ,  0x72 ,  0x07 },
    },{
      { 0x00 ,  0x80 ,  0xD1 ,  0x21 },
      { 0xFF ,  0x02 ,  0x6A ,  0x68 },
      { 0x00 ,  0x7C ,  0xCF ,  0x87 },
      { 0x00 ,  0xFD ,  0x99 ,  0x2A },
      { 0xFF ,  0x82 ,  0x62 ,  0xE9 },
    },{
      { 0x00 ,  0x80 ,  0xEA ,  0x1B },
      { 0xFF ,  0x02 ,  0x5C ,  0x28 },
      { 0x00 ,  0x7C ,  0xC5 ,  0x76 },
      { 0x00 ,  0xFD ,  0xA7 ,  0xD9 },
      { 0xFF ,  0x82 ,  0x54 ,  0x72 },
    }
  }
,

  {
    {
      { 0x00 ,  0x7B ,  0x98 ,  0x68 },
      { 0xFF ,  0x13 ,  0xFF ,  0x3D },
      { 0x00 ,  0x70 ,  0xBE ,  0xB3 },
      { 0x00 ,  0xEB ,  0xA3 ,  0x6A },
      { 0xFF ,  0x93 ,  0x4B ,  0x8C },
    },{
      { 0x00 ,  0x7C ,  0x0D ,  0xF6 },
      { 0xFF ,  0x13 ,  0x64 ,  0xE4 },
      { 0x00 ,  0x70 ,  0xE8 ,  0xD9 },
      { 0x00 ,  0xEC ,  0x47 ,  0xBE },
      { 0xFF ,  0x92 ,  0xB5 ,  0xD2 },
    },{
      { 0x00 ,  0x7C ,  0x81 ,  0xD8 },
      { 0xFF ,  0x12 ,  0xD1 ,  0x58 },
      { 0x00 ,  0x71 ,  0x0E ,  0x30 },
      { 0x00 ,  0xEC ,  0xE5 ,  0x0D },
      { 0xFF ,  0x92 ,  0x26 ,  0x5D },
    },{
      { 0x00 ,  0x7C ,  0xF4 ,  0x48 },
      { 0xFF ,  0x12 ,  0x44 ,  0x51 },
      { 0x00 ,  0x71 ,  0x2E ,  0xCA },
      { 0x00 ,  0xED ,  0x7B ,  0xA7 },
      { 0xFF ,  0x91 ,  0x9C ,  0xE6 },
    },{
      { 0x00 ,  0x7D ,  0x65 ,  0x82 },
      { 0xFF ,  0x11 ,  0xBD ,  0x8A },
      { 0x00 ,  0x71 ,  0x4A ,  0xB6 },
      { 0x00 ,  0xEE ,  0x0B ,  0xD7 },
      { 0xFF ,  0x91 ,  0x19 ,  0x29 },
    },{
      { 0x00 ,  0x7D ,  0xD5 ,  0xBE },
      { 0xFF ,  0x11 ,  0x3C ,  0xC3 },
      { 0x00 ,  0x71 ,  0x62 ,  0x03 },
      { 0x00 ,  0xEE ,  0x95 ,  0xE6 },
      { 0xFF ,  0x90 ,  0x9A ,  0xE8 },
    },{
      { 0x00 ,  0x7E ,  0x45 ,  0x37 },
      { 0xFF ,  0x10 ,  0xC1 ,  0xBD },
      { 0x00 ,  0x71 ,  0x74 ,  0xB9 },
      { 0x00 ,  0xEF ,  0x1A ,  0x18 },
      { 0xFF ,  0x90 ,  0x21 ,  0xE5 },
    },{
      { 0x00 ,  0x7E ,  0xB4 ,  0x27 },
      { 0xFF ,  0x10 ,  0x4C ,  0x3C },
      { 0x00 ,  0x71 ,  0x82 ,  0xE0 },
      { 0x00 ,  0xEF ,  0x98 ,  0xB1 },
      { 0xFF ,  0x8F ,  0xAD ,  0xE6 },
    },{
      { 0x00 ,  0x7F ,  0x22 ,  0xC6 },
      { 0xFF ,  0x0F ,  0xDC ,  0x0A },
      { 0x00 ,  0x71 ,  0x8C ,  0x7D },
      { 0x00 ,  0xF0 ,  0x11 ,  0xEE },
      { 0xFF ,  0x8F ,  0x3E ,  0xB4 },
    },{
      { 0x00 ,  0x7F ,  0x91 ,  0x51 },
      { 0xFF ,  0x0F ,  0x70 ,  0xF0 },
      { 0x00 ,  0x71 ,  0x91 ,  0x91 },
      { 0x00 ,  0xF0 ,  0x86 ,  0x0B },
      { 0xFF ,  0x8E ,  0xD4 ,  0x19 },
    },{
      { 0x00 ,  0x80 ,  0x00 ,  0x00 },
      { 0xFF ,  0x0F ,  0x0A ,  0xBE },
      { 0x00 ,  0x71 ,  0x92 ,  0x1C },
      { 0x00 ,  0xF0 ,  0xF5 ,  0x42 },
      { 0xFF ,  0x8E ,  0x6D ,  0xE4 },
    },{
      { 0x00 ,  0x80 ,  0x6F ,  0x0F },
      { 0xFF ,  0x0E ,  0xA9 ,  0x44 },
      { 0x00 ,  0x71 ,  0x8E ,  0x19 },
      { 0x00 ,  0xF1 ,  0x5F ,  0xC8 },
      { 0xFF ,  0x8E ,  0x0B ,  0xE5 },
    },{
      { 0x00 ,  0x80 ,  0xDE ,  0xBA },
      { 0xFF ,  0x0E ,  0x4C ,  0x56 },
      { 0x00 ,  0x71 ,  0x85 ,  0x80 },
      { 0x00 ,  0xF1 ,  0xC5 ,  0xD3 },
      { 0xFF ,  0x8D ,  0xAD ,  0xEE },
    },{
      { 0x00 ,  0x81 ,  0x4F ,  0x3F },
      { 0xFF ,  0x0D ,  0xF3 ,  0xC9 },
      { 0x00 ,  0x71 ,  0x78 ,  0x48 },
      { 0x00 ,  0xF2 ,  0x27 ,  0x92 },
      { 0xFF ,  0x8D ,  0x53 ,  0xD4 },
    },{
      { 0x00 ,  0x81 ,  0xC0 ,  0xDA },
      { 0xFF ,  0x0D ,  0x9F ,  0x76 },
      { 0x00 ,  0x71 ,  0x66 ,  0x63 },
      { 0x00 ,  0xF2 ,  0x85 ,  0x34 },
      { 0xFF ,  0x8C ,  0xFD ,  0x6E },
    },{
      { 0x00 ,  0x82 ,  0x33 ,  0xCB },
      { 0xFF ,  0x0D ,  0x4F ,  0x38 },
      { 0x00 ,  0x71 ,  0x4F ,  0xC0 },
      { 0x00 ,  0xF2 ,  0xDE ,  0xE7 },
      { 0xFF ,  0x8C ,  0xAA ,  0x94 },
    },{
      { 0x00 ,  0x82 ,  0xA8 ,  0x55 },
      { 0xFF ,  0x0D ,  0x02 ,  0xEC },
      { 0x00 ,  0x71 ,  0x34 ,  0x4A },
      { 0x00 ,  0xF3 ,  0x34 ,  0xD5 },
      { 0xFF ,  0x8C ,  0x5B ,  0x21 },
    },{
      { 0x00 ,  0x83 ,  0x1E ,  0xB9 },
      { 0xFF ,  0x0C ,  0xBA ,  0x73 },
      { 0x00 ,  0x71 ,  0x13 ,  0xEC },
      { 0x00 ,  0xF3 ,  0x87 ,  0x25 },
      { 0xFF ,  0x8C ,  0x0E ,  0xF3 },
    },{
      { 0x00 ,  0x83 ,  0x97 ,  0x3E },
      { 0xFF ,  0x0C ,  0x75 ,  0xAD },
      { 0x00 ,  0x70 ,  0xEE ,  0x88 },
      { 0x00 ,  0xF3 ,  0xD5 ,  0xFF },
      { 0xFF ,  0x8B ,  0xC5 ,  0xE6 },
    },{
      { 0x00 ,  0x84 ,  0x12 ,  0x29 },
      { 0xFF ,  0x0C ,  0x34 ,  0x7E },
      { 0x00 ,  0x70 ,  0xC4 ,  0x01 },
      { 0x00 ,  0xF4 ,  0x21 ,  0x88 },
      { 0xFF ,  0x8B ,  0x7F ,  0xDB },
    },{
      { 0x00 ,  0x84 ,  0x8F ,  0xC7 },
      { 0xFF ,  0x0B ,  0xF6 ,  0xCC },
      { 0x00 ,  0x70 ,  0x94 ,  0x33 },
      { 0x00 ,  0xF4 ,  0x69 ,  0xE1 },
      { 0xFF ,  0x8B ,  0x3C ,  0xB4 },
    }
  }
,

  {
    {
      { 0x00 ,  0x72 ,  0xBD ,  0x1C },
      { 0xFF ,  0x28 ,  0xFD ,  0x50 },
      { 0x00 ,  0x66 ,  0x79 ,  0x02 },
      { 0x00 ,  0xD7 ,  0x02 ,  0xB0 },
      { 0xFF ,  0xA6 ,  0xC9 ,  0xE2 },
    },{
      { 0x00 ,  0x74 ,  0x16 ,  0x07 },
      { 0xFF ,  0x27 ,  0x26 ,  0xCC },
      { 0x00 ,  0x66 ,  0xFB ,  0x6D },
      { 0x00 ,  0xD8 ,  0xD9 ,  0x34 },
      { 0xFF ,  0xA4 ,  0xEE ,  0x8C },
    },{
      { 0x00 ,  0x75 ,  0x6B ,  0xFF },
      { 0xFF ,  0x25 ,  0x63 ,  0x28 },
      { 0x00 ,  0x67 ,  0x6D ,  0xB7 },
      { 0x00 ,  0xDA ,  0x9C ,  0xD8 },
      { 0xFF ,  0xA3 ,  0x26 ,  0x49 },
    },{
      { 0x00 ,  0x76 ,  0xBF ,  0x9E },
      { 0xFF ,  0x23 ,  0xB1 ,  0xFC },
      { 0x00 ,  0x67 ,  0xCF ,  0xB4 },
      { 0x00 ,  0xDC ,  0x4E ,  0x04 },
      { 0xFF ,  0xA1 ,  0x70 ,  0xAE },
    },{
      { 0x00 ,  0x78 ,  0x11 ,  0x82 },
      { 0xFF ,  0x22 ,  0x12 ,  0xD9 },
      { 0x00 ,  0x68 ,  0x21 ,  0x32 },
      { 0x00 ,  0xDD ,  0xED ,  0x27 },
      { 0xFF ,  0x9F ,  0xCD ,  0x4B },
    },{
      { 0x00 ,  0x79 ,  0x62 ,  0x56 },
      { 0xFF ,  0x20 ,  0x85 ,  0x48 },
      { 0x00 ,  0x68 ,  0x62 ,  0x01 },
      { 0x00 ,  0xDF ,  0x7A ,  0xB8 },
      { 0xFF ,  0x9E ,  0x3B ,  0xA9 },
    },{
      { 0x00 ,  0x7A ,  0xB2 ,  0xCA },
      { 0xFF ,  0x1F ,  0x08 ,  0xD2 },
      { 0x00 ,  0x68 ,  0x91 ,  0xE9 },
      { 0x00 ,  0xE0 ,  0xF7 ,  0x2E },
      { 0xFF ,  0x9C ,  0xBB ,  0x4D },
    },{
      { 0x00 ,  0x7C ,  0x03 ,  0x9A },
      { 0xFF ,  0x1D ,  0x9C ,  0xF7 },
      { 0x00 ,  0x68 ,  0xB0 ,  0xAD },
      { 0x00 ,  0xE2 ,  0x63 ,  0x09 },
      { 0xFF ,  0x9B ,  0x4B ,  0xB9 },
    },{
      { 0x00 ,  0x7D ,  0x55 ,  0x8A },
      { 0xFF ,  0x1C ,  0x41 ,  0x38 },
      { 0x00 ,  0x68 ,  0xBE ,  0x0B },
      { 0x00 ,  0xE3 ,  0xBE ,  0xC8 },
      { 0xFF ,  0x99 ,  0xEC ,  0x6B },
    },{
      { 0x00 ,  0x7E ,  0xA9 ,  0x65 },
      { 0xFF ,  0x1A ,  0xF5 ,  0x14 },
      { 0x00 ,  0x68 ,  0xB9 ,  0xBB },
      { 0x00 ,  0xE5 ,  0x0A ,  0xEC },
      { 0xFF ,  0x98 ,  0x9C ,  0xE0 },
    },{
      { 0x00 ,  0x80 ,  0x00 ,  0x00 },
      { 0x00 ,  0x00 ,  0x00 ,  0x00 },
      { 0x00 ,  0x00 ,  0x00 ,  0x00 },
      { 0x00 ,  0x00 ,  0x00 ,  0x00 },
      { 0x00 ,  0x00 ,  0x00 ,  0x00 },
    },{
      { 0x00 ,  0x81 ,  0x5A ,  0x3A },
      { 0xFF ,  0x18 ,  0x89 ,  0x8A },
      { 0x00 ,  0x68 ,  0x7A ,  0xC7 },
      { 0x00 ,  0xE7 ,  0x76 ,  0x76 },
      { 0xFF ,  0x96 ,  0x2A ,  0xFF },
    },{
      { 0x00 ,  0x82 ,  0xB8 ,  0xFA },
      { 0xFF ,  0x17 ,  0x69 ,  0x1E },
      { 0x00 ,  0x68 ,  0x3F ,  0x67 },
      { 0x00 ,  0xE8 ,  0x96 ,  0xE2 },
      { 0xFF ,  0x95 ,  0x07 ,  0x9F },
    },{
      { 0x00 ,  0x84 ,  0x1D ,  0x32 },
      { 0xFF ,  0x16 ,  0x56 ,  0x3D },
      { 0x00 ,  0x67 ,  0xF0 ,  0xE1 },
      { 0x00 ,  0xE9 ,  0xA9 ,  0xC3 },
      { 0xFF ,  0x93 ,  0xF1 ,  0xEE },
    },{
      { 0x00 ,  0x85 ,  0x87 ,  0xDA },
      { 0xFF ,  0x15 ,  0x50 ,  0x65 },
      { 0x00 ,  0x67 ,  0x8E ,  0xBE },
      { 0x00 ,  0xEA ,  0xAF ,  0x9B },
      { 0xFF ,  0x92 ,  0xE9 ,  0x68 },
    },{
      { 0x00 ,  0x86 ,  0xF9 ,  0xFA },
      { 0xFF ,  0x14 ,  0x57 ,  0x17 },
      { 0x00 ,  0x67 ,  0x18 ,  0x7A },
      { 0x00 ,  0xEB ,  0xA8 ,  0xE9 },
      { 0xFF ,  0x91 ,  0xED ,  0x8C },
    },{
      { 0x00 ,  0x88 ,  0x74 ,  0x9F },
      { 0xFF ,  0x13 ,  0x69 ,  0xD3 },
      { 0x00 ,  0x66 ,  0x8D ,  0x86 },
      { 0x00 ,  0xEC ,  0x96 ,  0x2D },
      { 0xFF ,  0x90 ,  0xFD ,  0xDB },
    },{
      { 0x00 ,  0x89 ,  0xF8 ,  0xE6 },
      { 0xFF ,  0x12 ,  0x88 ,  0x1D },
      { 0x00 ,  0x65 ,  0xED ,  0x45 },
      { 0x00 ,  0xED ,  0x77 ,  0xE3 },
      { 0xFF ,  0x90 ,  0x19 ,  0xD5 },
    },{
      { 0x00 ,  0x8B ,  0x87 ,  0xF5 },
      { 0xFF ,  0x11 ,  0xB1 ,  0x7A },
      { 0x00 ,  0x65 ,  0x37 ,  0x0C },
      { 0x00 ,  0xEE ,  0x4E ,  0x86 },
      { 0xFF ,  0x8F ,  0x40 ,  0xFF },
    },{
      { 0x00 ,  0x8D ,  0x22 ,  0xFF },
      { 0xFF ,  0x10 ,  0xE5 ,  0x73 },
      { 0x00 ,  0x64 ,  0x6A ,  0x1F },
      { 0x00 ,  0xEF ,  0x1A ,  0x8D },
      { 0xFF ,  0x8E ,  0x72 ,  0xE2 },
    },{
      { 0x00 ,  0x8E ,  0xCB ,  0x44 },
      { 0xFF ,  0x10 ,  0x23 ,  0x95 },
      { 0x00 ,  0x63 ,  0x85 ,  0xB4 },
      { 0x00 ,  0xEF ,  0xDC ,  0x6B },
      { 0xFF ,  0x8D ,  0xAF ,  0x08 },
    }
  }
,

  {
    {
      { 0x00 ,  0x69 ,  0x23 ,  0xC5 },
      { 0xFF ,  0x4A ,  0x7D ,  0xF4 },
      { 0x00 ,  0x53 ,  0xFE ,  0xBE },
      { 0x00 ,  0xB5 ,  0x82 ,  0x0C },
      { 0xFF ,  0xC2 ,  0xDD ,  0x7D },
    },{
      { 0x00 ,  0x6B ,  0x55 ,  0x9C },
      { 0xFF ,  0x47 ,  0xCC ,  0xFA },
      { 0x00 ,  0x54 ,  0x9A ,  0xD4 },
      { 0x00 ,  0xB8 ,  0x33 ,  0x06 },
      { 0xFF ,  0xC0 ,  0x0F ,  0x90 },
    },{
      { 0x00 ,  0x6D ,  0x8A ,  0x8B },
      { 0xFF ,  0x45 ,  0x2F ,  0x87 },
      { 0x00 ,  0x55 ,  0x1F ,  0x79 },
      { 0x00 ,  0xBA ,  0xD0 ,  0x79 },
      { 0xFF ,  0xBD ,  0x55 ,  0xFC },
    },{
      { 0x00 ,  0x6F ,  0xC3 ,  0x36 },
      { 0xFF ,  0x42 ,  0xA5 ,  0xD9 },
      { 0x00 ,  0x55 ,  0x8B ,  0xCA },
      { 0x00 ,  0xBD ,  0x5A ,  0x27 },
      { 0xFF ,  0xBA ,  0xB1 ,  0x01 },
    },{
      { 0x00 ,  0x72 ,  0x00 ,  0x55 },
      { 0xFF ,  0x40 ,  0x30 ,  0x1A },
      { 0x00 ,  0x55 ,  0xDE ,  0xE0 },
      { 0x00 ,  0xBF ,  0xCF ,  0xE6 },
      { 0xFF ,  0xB8 ,  0x20 ,  0xCB },
    },{
      { 0x00 ,  0x74 ,  0x42 ,  0xB8 },
      { 0xFF ,  0x3D ,  0xCE ,  0x61 },
      { 0x00 ,  0x56 ,  0x17 ,  0xD4 },
      { 0x00 ,  0xC2 ,  0x31 ,  0x9F },
      { 0xFF ,  0xB5 ,  0xA5 ,  0x74 },
    },{
      { 0x00 ,  0x76 ,  0x8B ,  0x44 },
      { 0xFF ,  0x3B ,  0x80 ,  0xB4 },
      { 0x00 ,  0x56 ,  0x35 ,  0xBC },
      { 0x00 ,  0xC4 ,  0x7F ,  0x4C },
      { 0xFF ,  0xB3 ,  0x3F ,  0x00 },
    },{
      { 0x00 ,  0x78 ,  0xDA ,  0xF4 },
      { 0xFF ,  0x39 ,  0x47 ,  0x09 },
      { 0x00 ,  0x56 ,  0x37 ,  0xA7 },
      { 0x00 ,  0xC6 ,  0xB8 ,  0xF7 },
      { 0xFF ,  0xB0 ,  0xED ,  0x65 },
    },{
      { 0x00 ,  0x7B ,  0x32 ,  0xDA },
      { 0xFF ,  0x37 ,  0x21 ,  0x43 },
      { 0x00 ,  0x56 ,  0x1C ,  0xA1 },
      { 0x00 ,  0xC8 ,  0xDE ,  0xBD },
      { 0xFF ,  0xAE ,  0xB0 ,  0x85 },
    },{
      { 0x00 ,  0x7D ,  0x94 ,  0x1E },
      { 0xFF ,  0x35 ,  0x0F ,  0x3A },
      { 0x00 ,  0x55 ,  0xE3 ,  0xAB },
      { 0x00 ,  0xCA ,  0xF0 ,  0xC6 },
      { 0xFF ,  0xAC ,  0x88 ,  0x37 },
    },{
      { 0x00 ,  0x80 ,  0x00 ,  0x00 },
      { 0x00 ,  0x00 ,  0x00 ,  0x00 },
      { 0x00 ,  0x00 ,  0x00 ,  0x00 },
      { 0x00 ,  0x00 ,  0x00 ,  0x00 },
      { 0x00 ,  0x00 ,  0x00 ,  0x00 },
    },{
      { 0x00 ,  0x82 ,  0x77 ,  0xD5 },
      { 0xFF ,  0x31 ,  0x25 ,  0x79 },
      { 0x00 ,  0x55 ,  0x13 ,  0xCD },
      { 0x00 ,  0xCE ,  0xDA ,  0x87 },
      { 0xFF ,  0xA8 ,  0x74 ,  0x5E },
    },{
      { 0x00 ,  0x84 ,  0xFD ,  0x0D },
      { 0xFF ,  0x2F ,  0x4D ,  0x31 },
      { 0x00 ,  0x54 ,  0x7A ,  0xB6 },
      { 0x00 ,  0xD0 ,  0xB2 ,  0xCF },
      { 0xFF ,  0xA6 ,  0x88 ,  0x3D },
    },{
      { 0x00 ,  0x87 ,  0x91 ,  0x2D },
      { 0xFF ,  0x2D ,  0x87 ,  0x88 },
      { 0x00 ,  0x53 ,  0xBF ,  0x4F },
      { 0x00 ,  0xD2 ,  0x78 ,  0x78 },
      { 0xFF ,  0xA4 ,  0xAF ,  0x84 },
    },{
      { 0x00 ,  0x8A ,  0x35 ,  0xD5 },
      { 0xFF ,  0x2B ,  0xD4 ,  0x1F },
      { 0x00 ,  0x52 ,  0xE0 ,  0x5B },
      { 0x00 ,  0xD4 ,  0x2B ,  0xE1 },
      { 0xFF ,  0xA2 ,  0xE9 ,  0xCF },
    },{
      { 0x00 ,  0x8C ,  0xEC ,  0xBD },
      { 0xFF ,  0x2A ,  0x32 ,  0x8F },
      { 0x00 ,  0x51 ,  0xDC ,  0x8E },
      { 0x00 ,  0xD5 ,  0xCD ,  0x71 },
      { 0xFF ,  0xA1 ,  0x36 ,  0xB4 },
    },{
      { 0x00 ,  0x8F ,  0xB7 ,  0xB9 },
      { 0xFF ,  0x28 ,  0xA2 ,  0x6C },
      { 0x00 ,  0x50 ,  0xB2 ,  0x86 },
      { 0x00 ,  0xD7 ,  0x5D ,  0x94 },
      { 0xFF ,  0x9F ,  0x95 ,  0xC1 },
    },{
      { 0x00 ,  0x92 ,  0x98 ,  0xB6 },
      { 0xFF ,  0x27 ,  0x23 ,  0x43 },
      { 0x00 ,  0x4F ,  0x60 ,  0xCC },
      { 0x00 ,  0xD8 ,  0xDC ,  0xBD },
      { 0xFF ,  0x9E ,  0x06 ,  0x7E },
    },{
      { 0x00 ,  0x95 ,  0x91 ,  0xBE },
      { 0xFF ,  0x25 ,  0xB4 ,  0x9E },
      { 0x00 ,  0x4D ,  0xE5 ,  0xD1 },
      { 0x00 ,  0xDA ,  0x4B ,  0x62 },
      { 0xFF ,  0x9C ,  0x88 ,  0x71 },
    },{
      { 0x00 ,  0x98 ,  0xA4 ,  0xF9 },
      { 0xFF ,  0x24 ,  0x56 ,  0x02 },
      { 0x00 ,  0x4C ,  0x3F ,  0xED },
      { 0x00 ,  0xDB ,  0xA9 ,  0xFE },
      { 0xFF ,  0x9B ,  0x1B ,  0x1A },
    },{
      { 0x00 ,  0x9B ,  0xD4 ,  0xAB },
      { 0xFF ,  0x23 ,  0x06 ,  0xF4 },
      { 0x00 ,  0x4A ,  0x6D ,  0x5E },
      { 0x00 ,  0xDC ,  0xF9 ,  0x0C },
      { 0xFF ,  0x99 ,  0xBD ,  0xF7 },
    }
  }
,

  {
    {
      { 0x00 ,  0x36 ,  0x90 ,  0xFC },
      { 0xFF ,  0xD8 ,  0xD8 ,  0xE6 },
      { 0x00 ,  0x0A ,  0x28 ,  0x26 },
      { 0x00 ,  0x97 ,  0x75 ,  0x00 },
      { 0xFF ,  0xCE ,  0xF8 ,  0xF7 },
    },{
      { 0x00 ,  0x3B ,  0x61 ,  0x86 },
      { 0xFF ,  0xD3 ,  0xBB ,  0x70 },
      { 0x00 ,  0x0B ,  0xB0 ,  0xE8 },
      { 0x00 ,  0x95 ,  0x22 ,  0x40 },
      { 0xFF ,  0xD0 ,  0x0F ,  0xE1 },
    },{
      { 0x00 ,  0x40 ,  0xA2 ,  0x77 },
      { 0xFF ,  0xCE ,  0x08 ,  0xC7 },
      { 0x00 ,  0x0D ,  0x6A ,  0xD3 },
      { 0x00 ,  0x92 ,  0xBD ,  0x62 },
      { 0xFF ,  0xD1 ,  0x2C ,  0x8D },
    },{
      { 0x00 ,  0x46 ,  0x5D ,  0xF3 },
      { 0xFF ,  0xC7 ,  0xB1 ,  0x88 },
      { 0x00 ,  0x0F ,  0x5B ,  0x61 },
      { 0x00 ,  0x90 ,  0x46 ,  0x4B },
      { 0xFF ,  0xD2 ,  0x4E ,  0xD8 },
    },{
      { 0x00 ,  0x4C ,  0x9E ,  0xFD },
      { 0xFF ,  0xC0 ,  0xA4 ,  0xE6 },
      { 0x00 ,  0x11 ,  0x88 ,  0x96 },
      { 0x00 ,  0x8D ,  0xBC ,  0xEB },
      { 0xFF ,  0xD3 ,  0x76 ,  0x9C },
    },{
      { 0x00 ,  0x53 ,  0x71 ,  0x82 },
      { 0xFF ,  0xB8 ,  0xD0 ,  0x8C },
      { 0x00 ,  0x13 ,  0xF9 ,  0x09 },
      { 0x00 ,  0x8B ,  0x21 ,  0x39 },
      { 0xFF ,  0xD4 ,  0xA3 ,  0xB0 },
    },{
      { 0x00 ,  0x5A ,  0xE2 ,  0x73 },
      { 0xFF ,  0xB0 ,  0x20 ,  0x7C },
      { 0x00 ,  0x16 ,  0xB3 ,  0xF6 },
      { 0x00 ,  0x88 ,  0x73 ,  0x35 },
      { 0xFF ,  0xD5 ,  0xD5 ,  0xE6 },
    },{
      { 0x00 ,  0x62 ,  0xFF ,  0xCF },
      { 0xFF ,  0xA6 ,  0x7E ,  0xF5 },
      { 0x00 ,  0x19 ,  0xC1 ,  0x46 },
      { 0x00 ,  0x85 ,  0xB2 ,  0xEA },
      { 0xFF ,  0xD7 ,  0x0D ,  0x0D },
    },{
      { 0x00 ,  0x6B ,  0xD8 ,  0xB9 },
      { 0xFF ,  0x9B ,  0xD4 ,  0x4C },
      { 0x00 ,  0x1D ,  0x29 ,  0x9E },
      { 0x00 ,  0x82 ,  0xE0 ,  0x6D },
      { 0xFF ,  0xD8 ,  0x48 ,  0xF0 },
    },{
      { 0x00 ,  0x75 ,  0x7D ,  0x90 },
      { 0xFF ,  0x90 ,  0x06 ,  0xCD },
      { 0x00 ,  0x20 ,  0xF6 ,  0x6C },
      { 0x00 ,  0x7F ,  0xFB ,  0xDF },
      { 0xFF ,  0xD9 ,  0x89 ,  0x57 },
    },{
      { 0x00 ,  0x80 ,  0x00 ,  0x00 },
      { 0xFF ,  0x82 ,  0xFA ,  0x94 },
      { 0x00 ,  0x25 ,  0x31 ,  0xF8 },
      { 0x00 ,  0x7D ,  0x05 ,  0x6C },
      { 0xFF ,  0xDA ,  0xCE ,  0x08 },
    },{
      { 0x00 ,  0x8B ,  0x73 ,  0x18 },
      { 0xFF ,  0x74 ,  0x91 ,  0x67 },
      { 0x00 ,  0x29 ,  0xE7 ,  0x71 },
      { 0x00 ,  0x79 ,  0xFD ,  0x4D },
      { 0xFF ,  0xDC ,  0x16 ,  0xC3 },
    },{
      { 0x00 ,  0x97 ,  0xEB ,  0x66 },
      { 0xFF ,  0x64 ,  0xAA ,  0x90 },
      { 0x00 ,  0x2F ,  0x22 ,  0xFF },
      { 0x00 ,  0x76 ,  0xE3 ,  0xC6 },
      { 0xFF ,  0xDD ,  0x63 ,  0x46 },
    },{
      { 0x00 ,  0xA5 ,  0x7F ,  0x07 },
      { 0xFF ,  0x53 ,  0x22 ,  0xB0 },
      { 0x00 ,  0x34 ,  0xF1 ,  0xD1 },
      { 0x00 ,  0x73 ,  0xB9 ,  0x2C },
      { 0xFF ,  0xDE ,  0xB3 ,  0x4C },
    },{
      { 0x00 ,  0xB4 ,  0x45 ,  0xCB },
      { 0xFF ,  0x3F ,  0xD3 ,  0x98 },
      { 0x00 ,  0x3B ,  0x62 ,  0x32 },
      { 0x00 ,  0x70 ,  0x7D ,  0xDF },
      { 0xFF ,  0xE0 ,  0x06 ,  0x8D },
    },{
      { 0x00 ,  0xC4 ,  0x59 ,  0x42 },
      { 0xFF ,  0x2A ,  0x94 ,  0x1C },
      { 0x00 ,  0x42 ,  0x83 ,  0x97 },
      { 0x00 ,  0x6D ,  0x32 ,  0x4E },
      { 0xFF ,  0xE1 ,  0x5C ,  0xBC },
    },{
      { 0x00 ,  0xD5 ,  0xD4 ,  0xE4 },
      { 0xFF ,  0x13 ,  0x37 ,  0xE4 },
      { 0x00 ,  0x4A ,  0x66 ,  0xB3 },
      { 0x00 ,  0x69 ,  0xD6 ,  0xF8 },
      { 0xFF ,  0xE2 ,  0xB5 ,  0x8D },
    },{
      { 0x00 ,  0xE8 ,  0xD6 ,  0x21 },
      { 0xFE ,  0xF9 ,  0x8F ,  0x3E },
      { 0x00 ,  0x53 ,  0x1D ,  0x89 },
      { 0x00 ,  0x66 ,  0x6C ,  0x6B },
      { 0xFF ,  0xE4 ,  0x10 ,  0xAF },
    },{
      { 0x00 ,  0xFD ,  0x7C ,  0x85 },
      { 0xFE ,  0xDD ,  0x66 ,  0xED },
      { 0x00 ,  0x5C ,  0xBB ,  0x80 },
      { 0x00 ,  0x62 ,  0xF3 ,  0x42 },
      { 0xFF ,  0xE5 ,  0x6D ,  0xCD },
    },{
      { 0x01 ,  0x13 ,  0xE9 ,  0xD2 },
      { 0xFE ,  0xBE ,  0x87 ,  0xFC },
      { 0x00 ,  0x67 ,  0x55 ,  0x75 },
      { 0x00 ,  0x5F ,  0x6C ,  0x2A },
      { 0xFF ,  0xE6 ,  0xCC ,  0x92 },
    },{
      { 0x01 ,  0x2C ,  0x42 ,  0x21 },
      { 0xFE ,  0x9C ,  0xB7 ,  0x87 },
      { 0x00 ,  0x73 ,  0x01 ,  0xD1 },
      { 0x00 ,  0x5B ,  0xD7 ,  0xE0 },
      { 0xFF ,  0xE8 ,  0x2C ,  0xA7 },
    }
  }
,

  {
    {
      { 0x00 ,  0x3E ,  0xF6 ,  0xA3 },
      { 0xFF ,  0xF5 ,  0x65 ,  0x58 },
      { 0x00 ,  0x05 ,  0x10 ,  0x10 },
      { 0x00 ,  0x5F ,  0x9D ,  0x47 },
      { 0xFF ,  0xE6 ,  0xF6 ,  0xAE },
    },{
      { 0x00 ,  0x43 ,  0x90 ,  0x7A },
      { 0xFF ,  0xF2 ,  0x85 ,  0xA1 },
      { 0x00 ,  0x05 ,  0xC0 ,  0x97 },
      { 0x00 ,  0x5C ,  0x64 ,  0x18 },
      { 0xFF ,  0xE7 ,  0xC5 ,  0x34 },
    },{
      { 0x00 ,  0x48 ,  0x82 ,  0xD1 },
      { 0xFF ,  0xEF ,  0x48 ,  0xC9 },
      { 0x00 ,  0x06 ,  0x86 ,  0xFC },
      { 0x00 ,  0x59 ,  0x19 ,  0xAA },
      { 0xFF ,  0xE8 ,  0x93 ,  0xC0 },
    },{
      { 0x00 ,  0x4D ,  0xD4 ,  0x35 },
      { 0xFF ,  0xEB ,  0xA5 ,  0xB1 },
      { 0x00 ,  0x07 ,  0x65 ,  0xA2 },
      { 0x00 ,  0x55 ,  0xBE ,  0x7B },
      { 0xFF ,  0xE9 ,  0x61 ,  0xFD },
    },{
      { 0x00 ,  0x53 ,  0x8B ,  0xA9 },
      { 0xFF ,  0xE7 ,  0x92 ,  0x81 },
      { 0x00 ,  0x08 ,  0x5F ,  0x28 },
      { 0x00 ,  0x52 ,  0x53 ,  0x19 },
      { 0xFF ,  0xEA ,  0x2F ,  0x95 },
    },{
      { 0x00 ,  0x59 ,  0xB0 ,  0xA8 },
      { 0xFF ,  0xE3 ,  0x04 ,  0x9C },
      { 0x00 ,  0x09 ,  0x76 ,  0x67 },
      { 0x00 ,  0x4E ,  0xD8 ,  0x20 },
      { 0xFF ,  0xEA ,  0xFC ,  0x34 },
    },{
      { 0x00 ,  0x60 ,  0x4B ,  0x32 },
      { 0xFF ,  0xDD ,  0xF0 ,  0x96 },
      { 0x00 ,  0x0A ,  0xAE ,  0x79 },
      { 0x00 ,  0x4B ,  0x4E ,  0x3A },
      { 0xFF ,  0xEB ,  0xC7 ,  0x85 },
    },{
      { 0x00 ,  0x67 ,  0x63 ,  0xCE },
      { 0xFF ,  0xD8 ,  0x4A ,  0x24 },
      { 0x00 ,  0x0C ,  0x0A ,  0xBD },
      { 0x00 ,  0x47 ,  0xB6 ,  0x1D },
      { 0xFF ,  0xEC ,  0x91 ,  0x34 },
    },{
      { 0x00 ,  0x6F ,  0x03 ,  0x93 },
      { 0xFF ,  0xD2 ,  0x04 ,  0x16 },
      { 0x00 ,  0x0D ,  0x8E ,  0xD9 },
      { 0x00 ,  0x44 ,  0x10 ,  0x8F },
      { 0xFF ,  0xED ,  0x58 ,  0xEF },
    },{
      { 0x00 ,  0x77 ,  0x34 ,  0x33 },
      { 0xFF ,  0xCB ,  0x10 ,  0x45 },
      { 0x00 ,  0x0F ,  0x3E ,  0xC2 },
      { 0x00 ,  0x40 ,  0x5E ,  0x62 },
      { 0xFF ,  0xEE ,  0x1E ,  0x63 },
    },{
      { 0x00 ,  0x80 ,  0x00 ,  0x00 },
      { 0xFF ,  0xC3 ,  0x5F ,  0x89 },
      { 0x00 ,  0x11 ,  0x1E ,  0xBD },
      { 0x00 ,  0x3C ,  0xA0 ,  0x77 },
      { 0xFF ,  0xEE ,  0xE1 ,  0x43 },
    },{
      { 0x00 ,  0x89 ,  0x71 ,  0xF6 },
      { 0xFF ,  0xBA ,  0xE1 ,  0xAC },
      { 0x00 ,  0x13 ,  0x33 ,  0x65 },
      { 0x00 ,  0x38 ,  0xD7 ,  0xB7 },
      { 0xFF ,  0xEF ,  0xA1 ,  0x42 },
    },{
      { 0x00 ,  0x93 ,  0x95 ,  0xC5 },
      { 0xFF ,  0xB1 ,  0x85 ,  0x58 },
      { 0x00 ,  0x15 ,  0x81 ,  0xB1 },
      { 0x00 ,  0x35 ,  0x05 ,  0x1D },
      { 0xFF ,  0xF0 ,  0x5E ,  0x16 },
    },{
      { 0x00 ,  0x9E ,  0x77 ,  0xD9 },
      { 0xFF ,  0xA7 ,  0x38 ,  0x10 },
      { 0x00 ,  0x18 ,  0x0E ,  0xF5 },
      { 0x00 ,  0x31 ,  0x29 ,  0xAA },
      { 0xFF ,  0xF1 ,  0x17 ,  0x78 },
    },{
      { 0x00 ,  0xAA ,  0x25 ,  0x64 },
      { 0xFF ,  0x9B ,  0xE6 ,  0x1C },
      { 0x00 ,  0x1A ,  0xE0 ,  0xEB },
      { 0x00 ,  0x2D ,  0x46 ,  0x6C },
      { 0xFF ,  0xF1 ,  0xCD ,  0x28 },
    },{
      { 0x00 ,  0xB6 ,  0xAC ,  0x6B },
      { 0xFF ,  0x8F ,  0x7A ,  0x7E },
      { 0x00 ,  0x1D ,  0xFD ,  0xB5 },
      { 0x00 ,  0x29 ,  0x5C ,  0x7C },
      { 0xFF ,  0xF2 ,  0x7E ,  0xE6 },
    },{
      { 0x00 ,  0xC4 ,  0x1B ,  0xCD },
      { 0xFF ,  0x81 ,  0xDE ,  0xE0 },
      { 0x00 ,  0x21 ,  0x6B ,  0xE1 },
      { 0x00 ,  0x25 ,  0x6C ,  0xF9 },
      { 0xFF ,  0xF3 ,  0x2C ,  0x79 },
    },{
      { 0x00 ,  0xD2 ,  0x83 ,  0x51 },
      { 0xFF ,  0x72 ,  0xFB ,  0x87 },
      { 0x00 ,  0x25 ,  0x32 ,  0x72 },
      { 0x00 ,  0x21 ,  0x79 ,  0x0B },
      { 0xFF ,  0xF3 ,  0xD5 ,  0xAB },
    },{
      { 0x00 ,  0xE1 ,  0xF3 ,  0xB1 },
      { 0xFF ,  0x62 ,  0xB7 ,  0x42 },
      { 0x00 ,  0x29 ,  0x58 ,  0xE0 },
      { 0x00 ,  0x1D ,  0x81 ,  0xE2 },
      { 0xFF ,  0xF4 ,  0x7A ,  0x4C },
    },{
      { 0x00 ,  0xF2 ,  0x7E ,  0xA3 },
      { 0xFF ,  0x50 ,  0xF7 ,  0x5A },
      { 0x00 ,  0x2D ,  0xE7 ,  0x22 },
      { 0x00 ,  0x19 ,  0x88 ,  0xB1 },
      { 0xFF ,  0xF5 ,  0x1A ,  0x31 },
    },{
      { 0x01 ,  0x04 ,  0x36 ,  0xEE },
      { 0xFF ,  0x3D ,  0x9F ,  0x7F },
      { 0x00 ,  0x32 ,  0xE5 ,  0xAD },
      { 0x00 ,  0x15 ,  0x8E ,  0xB1 },
      { 0xFF ,  0xF5 ,  0xB5 ,  0x34 },
    }
  }
};
