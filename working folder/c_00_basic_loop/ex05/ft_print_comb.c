/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:06:39 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/24 12:09:22 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '9')
	{
		while (y <= '9')
		{
			while (z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7')
					write(1, ", ", 2);
				z ++;
			}
			z = ++y + 1;
		}
		y = ++x + 1;
		z = y + 1;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return(0);
}
*/