/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:13:29 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/02 18:13:31 by thihoang         ###   ########.fr       */
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
	int		j;
	char	c;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			c = argv[i][j];
			ft_putchar(c);
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
	return (0);
}
