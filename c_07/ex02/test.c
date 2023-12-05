#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	*ints;
	int	i;

	i = 0;
	ints = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (i < max - min)
	{
		ints[i] = min + i;
		i++;
	}

	/*int j;
	j = 0;
	while (j < max)
	{
		printf("%d\n", ints[j]);
		j++;
	}*/
	return (max - min);
}

#include <stdio.h>

int main(void)
{
	int	*ints;
	int i;
	int size;

	i = 0;
	size = ft_ultimate_range(&ints, 1, 5);
	printf("%d\n", size);
	while (i < size)
	{
		printf("%d\n", ints[i]);
		i++;
	}
	free(ints);
	return 0;
}