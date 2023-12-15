/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:40:00 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/01 20:40:04 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest != '\0')
	{
		dest ++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (temp);
}

/*#include <stdio.h>
int main(void)
{
	char	dest[200] = "Hello";
	char	src[] = " World";
	char	src2[] = " 123456";
	
	printf("%s \n", ft_strcat(dest, src));
	printf("%s \n", ft_strcat(dest, src2));
	return 0;
}*/
