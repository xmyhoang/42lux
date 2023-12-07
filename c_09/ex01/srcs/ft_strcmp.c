/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:39:33 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/01 20:39:36 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
		i ++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d \n", ft_strcmp("abc", "abc"));
	printf("%d \n", ft_strcmp("abc", "abx"));
	printf("%d \n", ft_strcmp("abc", "12a"));
}
*/