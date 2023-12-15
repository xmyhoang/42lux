/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:57:22 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 17:57:27 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_is_printable(char str)
{
	if ((str >= ' ') && (str <= '~'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (check_is_printable(*str))
		{
			str ++;
		}
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d \n", ft_str_is_printable("abc"));
	printf("%d \n", ft_str_is_printable(""));
	return (0);
}
*/
