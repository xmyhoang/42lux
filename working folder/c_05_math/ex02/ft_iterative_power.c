/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:19:38 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/04 18:19:42 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 0)
	{	
		result *= nb;
		power --;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_iterative_power(10,2));
	printf("%d \n", ft_iterative_power(5,2));
	printf("%d \n", ft_iterative_power(3,3));
	printf("%d \n", ft_iterative_power(3,-3));
	printf("%d \n", ft_iterative_power(3,0));
	printf("%d \n", ft_iterative_power(3,1));
	return 0;
}*/
