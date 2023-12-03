/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:40:22 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/01 20:40:25 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;

	if (*str == '\0')
		return (str);
	while (*str != '\0')
	{
		temp = str;
		while (*str == *to_find && *to_find != '\0')
		{
			str++;
			to_find++;
		}
		if (*to_find == '\0')
		{
			return (temp);
		}
		str ++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s \n", ft_strstr("123ABC", "123"));
	printf("%s \n", ft_strstr("xyz123ABC456", "123ABC"));
	printf("%s \n", ft_strstr("123ABCxyz", "123ABC"));
	printf("%s \n", ft_strstr("123", "ABC"));
	return 0;
}*/
