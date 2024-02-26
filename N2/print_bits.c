#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_bits(unsigned char octet)
{
	int	bit;

	bit = 8;
	while(bit--)
	{
		if((octet >> bit & 1) == 0)
			ft_putchar(0);
		else
			ft_putchar(1);
	}
}
