#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_strchr (char *arr, char c)
{
	int	i;

	i = 0;
	//printf("ENTREI\n");
	while (arr[i])
	{
		//printf("ENTREI NO WHILE!%c\n", arr[i]);
		if (arr[i] == c)
			return (0);
		i++;
	}
	//printf("arr ---> %s\n", arr);
	return (1);
}

void ft_check (char *s)
{
	int i = 0;
	static int j = 0;
	static char arr[200];
	
	while (s[i])
	{
		//printf("str[i] ---> %c\n", s[i]);
		if (ft_strchr(arr, s[i]) == 1)
		{
			//printf("ENTREI NO IF!\n");
			ft_putchar(s[i]);
		}
		arr[j++] = s[i++];
		//printf("ARR!!!\n");
		//printf("depois do if: str[i] ---> %c\n", s[i]);
	}
}

int	main (int count, char **value)
{
	char	*s1 = value[1];
	char	*s2 = value[2];
	int	i = 0;

	if (count == 3)
	{
		ft_check(s1);
		ft_check(s2);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
