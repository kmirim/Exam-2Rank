#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	camel_to_snake(char *s)
{
	while (*s)
	{
		if(*s >= 'A' && *s <= 'Z')
		{
			ft_putchar(*s + 32);
			ft_putchar('_');
		}	
		else
			ft_putchar(*s);
		s++;
	}
}

int	main(int count, char **value)
{
	if (count == 2)
		camel_to_snake(value[1]);
	else
		ft_putchar('\n');
}
