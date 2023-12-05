/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:58:26 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/02 14:58:28 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb -- ;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_iterative_factorial(5));
	printf("%d \n", ft_iterative_factorial(0));
	return 0;
}*/