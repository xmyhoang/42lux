/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:13:09 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/02 18:13:12 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char const *argv[])
{
	int		i;
	char	c;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		c = argv[0][i];
		ft_putchar(c);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
