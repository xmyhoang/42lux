/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:59:25 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/02 14:59:30 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while ((i * i) <= nb && i < 46340)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_is_prime(7));
	printf("%d \n", ft_is_prime(2));
	printf("%d \n", ft_is_prime(32));
	printf("%d \n", ft_is_prime(6));
	printf("%d \n", ft_is_prime(0));
	printf("%d \n", ft_is_prime(1));
	printf("%d \n", ft_is_prime(-2147483647));
	return 0;
}*/
