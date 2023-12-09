/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:10:55 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/08 19:11:13 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ints;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ints = (int *)malloc((max - min + 1) * sizeof(int));
	while (i < max - min + 1)
	{
		ints[i] = min + i;
		i++;
	}
	*range = ints;
	return (max - min + 1);
}

/*#include <stdio.h>

int main(void)
{
	int	*ints;
	int i;
	int size;

	i = 0;
	size = ft_ultimate_range(&ints, 1, 5);
	printf("SIZE: %d\n", size);
	while (i < size)
	{
		printf("%d\n", ints[i]);
		i++;
	}
	free(ints);
	return 0;
}*/
