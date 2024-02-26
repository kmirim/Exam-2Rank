int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return (1);
}

#include <stdio.h>

int	main (void)
{
	printf("%i\n", is_power_of_2(1024));
	return (0);
}
