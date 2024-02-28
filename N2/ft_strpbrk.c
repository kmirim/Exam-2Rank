char *ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;

	if (!s1 || !s2)
		return (0);
	while(*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char *) s1 ;
			i++;
		}
		s1++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main (void)
{
	printf("resultado: %s\n", ft_strpbrk("kalu", "ai"));
	printf("resultado da função original: %s\n", strpbrk("kalu", "ai"));
	return (0);
}
