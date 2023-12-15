/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:18:25 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/23 14:18:33 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number_as_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		print_number_as_char(i + '0');
		i ++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/