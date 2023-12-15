/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:32:11 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 14:32:17 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		temp = tab[a];
		tab[a] = tab[b];
		tab[b] = temp;
		a ++;
		b --;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	arr[] = {1,2,3,4,5};
	ft_rev_int_tab(arr, 5);

   for(int loop = 0; loop < 5; loop++)
		printf("%d ", arr[loop]);
}
*/
