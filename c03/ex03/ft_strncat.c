/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:40:12 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/01 20:40:15 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
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
	
	printf("%s \n", ft_strncat(dest, src, 3));
	printf("%s \n", ft_strncat(dest, src2, 3));
	return 0;
}*/
