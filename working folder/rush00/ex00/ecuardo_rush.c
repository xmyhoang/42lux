/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:36:04 by echaves           #+#    #+#             */
/*   Updated: 2023/11/25 13:36:08 by echaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char	c);

void addline(char c1, char c2, char c3, int x)
{
	int	n;
	
	// Always start a line at character n = 0
	n = 0;
	// Print first character of line
	if(n == 0)
	{
		ft_putchar(c1);
		n++;
	}
	// If x == 1, do not print next collumns
	if(x > 1)
	{
		// Repeat until x-1
		while(n < x-1)
		{
			ft_putchar(c2);
			n++;
		}
		if(n == x-1)
		{
			ft_putchar(c3);
			n = 0;
		}
	}

	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	l;
	
	l = 2;

	// Print first line one time
	addline(47, 42, 92, x);

	// if y == 1, stop printing
	if(y > 1)
	{
		// Repeat printing the lines until the end (y)
		while(l < y)
		{
			addline(42, 32, 42, x);
			l++;
		}
		// Print the last line
		addline(92, 42, 47, x);
	}
}
