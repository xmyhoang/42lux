/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:32:26 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/28 13:32:38 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	output_combn(int arr[], int n)
{
	int	i;
	int	digit;

	i = 0;
	while (i < n)
	{
		digit = arr[i] + '0';
		write(1, &digit, 1);
		i++;
	}
	if (arr[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	generate_combn(int arr[], int index, int n)
{
	int	start;
	int	i;

	if (index == n)
	{
		output_combn(arr, n);
	}
	if (index == 0)
	{
		start = 0;
	}
	else
	{
		start = arr[index - 1] + 1;
	}
	i = start;
	while (i <= 9)
	{
		arr[index] = i;
		generate_combn(arr, index + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	generate_combn(arr, 0, n);
}

int	main(void)
{
	ft_print_combn(4);
	return (0);
}
