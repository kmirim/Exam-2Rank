#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	unsigned char	bit;
	int	i;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		ft_putchar(bit);
	}
}

int	main ()
{
	print_bits(200);
}
