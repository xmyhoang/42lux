/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:32:26 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 14:32:30 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i ++;
		}
		size --;
	}
}

/*
#include <stdio.h>
int main(void)
{
	int arr[] = {3, 7, 1};
	ft_sort_int_tab(arr, 3);

	for(int loop = 0; loop < 3; loop++)
		printf("%d ", arr[loop]);
	return (0);
}
*/
