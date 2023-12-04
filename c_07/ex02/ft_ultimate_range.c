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
	return (max - min);
}

int main(void)
{
	int	*range[] = {};

	ft_ultimate_range(range, 1, 11);
	return 0;
}