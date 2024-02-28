char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *accept)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]))
			break;		
		i++;
	}
	printf("tamanho: %i\n", i);
	return (i);
}


int	main (int count, char **value)
{
	if (count == 3)
		ft_strcspn(value[1], value[2]);
	else 
		return (0);
}
