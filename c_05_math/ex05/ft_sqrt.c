/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:59:15 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/02 14:59:18 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (sqrt * sqrt != nb)
	{
		if (sqrt == nb || sqrt > 46340)
			return (0);
		sqrt ++;
	}
	return (sqrt);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_sqrt(4));
	printf("%d \n", ft_sqrt(9));
	printf("%d \n", ft_sqrt(25));
	printf("%d \n", ft_sqrt(10));
	printf("%d \n", ft_sqrt(-25));
	return 0;
}*/
