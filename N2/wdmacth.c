#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *s)
{
	while(*s)
		write(1, &*s++, 1);
	write(1, "\n", 1);
}

void 	ft_check (char *str1, char *str2)
{
	char	arr[200];
	int	i = 0;
	int	j = 0;

	while(str2[j])
	{
		if (str2[j++] == str1[i])
			i += 1;
	}
	if (str1[i] == 0)
		ft_putstr(str1);		
}
				
int main (int count, char **value)
{
	if (count == 3)
		ft_check(value[1], value[2]);
	else
		write(1, "\n", 1);
}
