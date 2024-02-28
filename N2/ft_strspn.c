#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *s, char c)
{
	while(*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn (char *s, char *accept)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("Função que eu fiz: %li\n", ft_strspn("kalu" , "zlaklu"));
	printf("Função original: %li\n", strspn("kalu", "zlaklu"));
	return (0);
}

