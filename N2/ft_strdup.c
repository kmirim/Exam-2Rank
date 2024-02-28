#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*s)
{
	int	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	char	*ptr;
	int	i;
	int	len;

	len = ft_strlen(src);
	ptr = malloc(sizeof(*src) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char *s;
	s = ft_strdup("ai caraio!");
	printf("return: %s\n",s);
	return (0);
}
*/
