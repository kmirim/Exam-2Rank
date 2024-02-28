#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	printf("valor de n depois do while ---> %i\n", n);
	if (n == 1)
		return (1);
	else
		return (0);
}

int	main (int count, char **value)
{
	int	n;

	if (count != 2)
		return (printf("\n"));
	else
	{
		n = atoi(value[1]);
		printf("retorno: %i\n", is_power_of_2(n));
	}
	return (0);
}
