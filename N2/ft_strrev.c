int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
char	*ft_strrev(char *str)
{
	int	len;
	char	*tmp;

	while (*str)
		str++;
	*tmp = *str;
	len = ft_strlen(str);
	while (tmp[len])
		--len;
	tmp[len] = '\0';
	return (tmp);
}

#include <stdio.h>

int	main (void)
{
	printf("%s\n", ft_strrev("oi"));
}
