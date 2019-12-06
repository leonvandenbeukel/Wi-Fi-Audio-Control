void Sigma_write_register_block(byte devAddress, short address, short dataLength, const byte *data );

void Sigma_write_register(byte devAddress, short address, short dataLength, byte *data );

void Sigmastudiotype_integer_convert( int32_t value );

void Sigmastudiotype_fixpoint_convert( float value );

void writeSigmaRegister(byte devAddress, short address, String value);
