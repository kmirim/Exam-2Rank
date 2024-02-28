#include <stdio.h>

int	ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int i = -1;
	int len = ft_strlen(str) - 1;
	char tmp;

	while (++i < len / 2)
	{
		printf("len: %i\n", len / 2);
		tmp = str[i];
		str[i] = str[len - i];
		str[len - i] = tmp;
	}
	return (str);
}

int	main (void)
{
	char s[] = "kaluan";
	ft_strrev(s);
	printf("return: %s", s);
	return(0);
}
