/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:56:37 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 17:56:42 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
	printf("%d \n", ft_str_is_alpha("abc"));
	printf("%d \n", ft_str_is_alpha("ABC"));
	printf("%d \n", ft_str_is_alpha("Abc"));
	printf("%d \n", ft_str_is_alpha("A12"));
	printf("%d \n", ft_str_is_alpha("123"));
	return (0);
}
*/
