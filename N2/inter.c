#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strchr(char *str, char c)
{
	while(*str)
	{
		if (*str == c)
			return (0);
		str++;
	}
	return (1);
}

void	ft_check(char *str1, char *str2)
{
	char	arr[200];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(str1[i])
	{
		if (ft_strchr(str2, str1[i]) == 0)
		{
			if (ft_strchr(arr, str1[i]) == 1)
				ft_putchar(str1[i]);
		}
		arr[j++] = str1[i++];
	}
	ft_putchar('\n');
}

int	main (int count, char **value)
{
	char	*s1 = value[1];
	char	*s2 = value[2];
	if (count == 3)
		ft_check (s1, s2);
	else	
		ft_putchar('\n');
}
