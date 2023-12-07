/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:39:43 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/01 20:39:47 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}	
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d \n", ft_strncmp("abc", "abc", 2));
	printf("%d \n", ft_strncmp("abc", "abz", 2));
	printf("%d \n", ft_strncmp("abc", "aac", 2));
}*/
