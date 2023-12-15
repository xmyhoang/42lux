/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:25:52 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/13 11:25:53 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atoi_base(char *str, char *base)
{
	long	nb;
	int		i;
	int		negative_sign;
	int		base_len;
	int		base_index;

	nb = 0;
	i = 0;
	base_len = ft_length(base);
	while (str[i])
	{
		negative_sign = whitespace_sign(str, &i);
		base_index = find_base_index(str[i], base);
		while (base_index != -1)
		{
			nb = nb * base_len + base_index;
			i++;
			base_index = find_base_index(str[i], base);
		}
		return (nb *= negative_sign);
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char *nbr = "   --+-2147483647";
	//char *nbr = " + -";
	//char *nbr = "0";
	char *base = "0123456789";
	printf("%s to base int (decimal) : %ld\n", nbr, ft_atoi_base(nbr, base);
	return 0;
}
