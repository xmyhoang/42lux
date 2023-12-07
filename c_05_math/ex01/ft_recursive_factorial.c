/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:58:34 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/02 14:58:49 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb != 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_recursive_factorial(5));
	printf("%d \n", ft_recursive_factorial(0));
	printf("%d \n", ft_recursive_factorial(-5));
	return 0;
}*/
