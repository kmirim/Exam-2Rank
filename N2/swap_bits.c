unsigned char	swap_bits(unsigned char octet)
{
	return ((octe >> 4) | (octet << 4));
}
