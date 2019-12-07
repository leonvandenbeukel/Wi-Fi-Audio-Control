void Sigma_write_register_block(byte devAddress, short address, short dataLength, const byte *data );

void Sigma_write_register(byte devAddress, short address, short dataLength, byte *data );

void Sigmastudiotype_integer_convert( int32_t value );

void Sigmastudiotype_fixpoint_convert( float value );

void writeSigmaRegisterBassGain(byte devAddress, short address, String value);

void writeSigmaRegisterEQ(byte devAddress, short baseAddress, byte band, byte value);
