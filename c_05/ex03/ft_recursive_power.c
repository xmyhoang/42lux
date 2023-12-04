/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:19:56 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/04 18:20:00 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_recursive_power(10,2));
	printf("%d \n", ft_recursive_power(5,2));
	printf("%d \n", ft_recursive_power(3,3));
	printf("%d \n", ft_recursive_power(3,-3));
	printf("%d \n", ft_recursive_power(3,0));
	printf("%d \n", ft_recursive_power(3,1));
	return (0);
}*/
