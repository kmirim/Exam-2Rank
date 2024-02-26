unsigned char	reverse_bits(unsigned char octet)
{
	int	bit = 8;
	unsigned char	c;

	while (bit --)
	{
		if (((octet >> bit) & 1) == 0)
			c = c | (1 >> bit);
		else
			c = c | (128 >> bit);
	}
	return (c);
}
