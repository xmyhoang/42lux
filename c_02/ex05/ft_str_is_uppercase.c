/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:56:50 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 17:57:00 by thihoang         ###   ########.fr       */
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
		if (*str >= 'A' && *str <= 'Z')
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
	printf("%d \n", ft_str_is_alpha(""));
	return (0);
}
*/
