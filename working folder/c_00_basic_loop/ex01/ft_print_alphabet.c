/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:18:25 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/23 14:18:33 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i ;

	i = 'a' ;
	while (i <= 'z')
	{
		write(1, &i, 1);
		i += 1;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/