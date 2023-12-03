/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:16:30 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/02 18:17:07 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int main(int argc, char const *argv[])
{
	int	i;
	char	c;

	i = 0;
	while (argc >= 2)
	{
		while (argv[argc - 1][i] != '\0')
		{
			c = argv[argc - 1][i];
			ft_putchar(c);
			i++;
		}
		ft_putchar('\n');
		argc--;
		i = 0;
	}
	return (0);
}

