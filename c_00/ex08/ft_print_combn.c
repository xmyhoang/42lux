#include <unistd.h>
#include <stdio.h>

void	increment_count(int	nb_array[], int	index)
{
	int	i;
	for (i = '0'; i <= '9'; i++)
	{
		nb_array[index] = i;
		write(1, &nb_array[index-1], 1);
		write(1, &nb_array[index], 1);
		write(1, ", ", 1);
	}
}

void	ft_print_combn(int n)
{
	int len;
	int	nb_array[n];

	for (len = n; len >= 0; len--)
	{
		increment_count(nb_array, len);
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}