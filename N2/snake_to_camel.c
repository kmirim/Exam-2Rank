#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}

int	main (int count, char **value)
{
	char	*s;
	int	i;

	s = value[1];
	i = 0;
	if (count == 2)
	{
		while (s[i])
		{
			if (s[i - 1] == '_')
				s[i] = s[i] - 32;
			if (s[i] != '_') 
				ft_putchar(s[i]);
			i++;
		}
		ft_putchar('\n');
	}
}
