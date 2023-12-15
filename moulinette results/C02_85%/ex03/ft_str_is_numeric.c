/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:56:25 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 17:56:28 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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
	printf("%d \n", ft_str_is_numeric("abc"));
	printf("%d \n", ft_str_is_numeric("ABC"));
	printf("%d \n", ft_str_is_numeric("A12"));
	printf("%d \n", ft_str_is_numeric("123"));
	return (0);
}
*/
