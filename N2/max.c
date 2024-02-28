int	max(int *tab, unsigned int len)
{
	unsigned int	i = 0;
	int	max;

	if (!len || !tab)
		return (0);
	max = tab[i];
	while(i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
#include <stdio.h>

int	main ()
{
	int arr[20] = {12, 45, 85, 31, 25, 36};
	printf("%i\n", max(arr, 2));
	return (0);
}
