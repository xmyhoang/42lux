#include <unistd.h>
#include <stdio.h>

void	output_combn(int arr[], int n)
{
	// Iterate through the array and print
	for (int i = 0; i < n; i++)
	{
		char	digit;

		digit = arr[i] + '0';
		write(1, &digit, 1);
	}

	// If not the end, print commas
	if (arr[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	generate_combn(int arr[], int index, int n)
{
	// If current index is equal to the combo size, output
	if (index == n)
	{
		output_combn(arr, n);
	}
	int	start;

	// Determine the starting point. Continue from the value after previous element in the array
	start = (index == 0) ? 0 : arr[index - 1] + 1;

	for (int i = start; i <= 9; i++)
	{
		// Set value for current index
		arr[index] = i;
		// Recursive call with next index
		generate_combn(arr, index + 1, n);
	}
}

void	ft_print_combn(int n)
{
	int	arr[n];
	generate_combn(arr, 0, n);
}

int	main(void)
{
	ft_print_combn(5);
	return (0);
}