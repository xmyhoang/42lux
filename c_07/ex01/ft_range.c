#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*ints;
	int	i;

	i = 0;
	ints = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
	{
		return (NULL);
	}
	while (i < max - min)
	{
		ints[i] = min + i;
		i++;
	}
	return (ints);
}

#include <stdio.h>

int main(void)
{
	int	*ints;
	int i;

	ints = ft_range(1, 11);
	i = 0;
	while (ints[i])
	{
		printf("%d\n", ints[i]);
		i++;
	}
	free(ints);
	return 0;
}