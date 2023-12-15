/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:31:48 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/28 13:31:54 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnums(int a, int b, int is_last)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	if (is_last == 0)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	is_last;

	a = 0;
	is_last = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
			{
				is_last = 1;
			}
			ft_putnums(a, b, is_last);
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/