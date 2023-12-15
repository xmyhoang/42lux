/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:19:54 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 18:19:58 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_is_printable(char c)
{
	if ((c >= ' ') && (c <= '~'))
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	while (str[i] != '\0')
	{
		is_printable = check_is_printable(str[i]);
		if (is_printable)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
			ft_putchar('\0');
		}
		i ++;
	}
}

/*int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?\n12345\v6");
	return 0;
}*/
