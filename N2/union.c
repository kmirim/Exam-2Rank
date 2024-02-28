#include <unistd.h>

void	ft_putchar(1, &c, 1)
{
	write(1, &c, 1);
}

void	ft_check (char *s, char c, int len)	
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}	
