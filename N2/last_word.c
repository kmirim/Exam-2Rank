#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
void	*last_word(char *s)
{
	int	len;
	int	start;
	int	end;

	len = ft_strlen(s) - 1;
	while (len >= 0 && (s[len] == ' ' || s[len] == '\t'))
		--len;
	end = len;
	while (len >= 0)
	{	
		if (s[len] == ' ' || s[len] == '\t')
			break;
		--len;
	}
	start = len + 1;
	while (start <= end)
	{
		ft_putchar(s[start]);
		start++;
	}
	ft_putchar('\n');
}

int	main (int count, char **value)
{
	if (count == 2)
		last_word(value[1]);
	else
		ft_putchar('\n');
}
