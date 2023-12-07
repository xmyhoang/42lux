/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:40:30 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/01 20:40:35 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (*src && i < size - dlen -1)
	{
		dest[i + dlen] = *src;
		i++;
		src++;
	}
	dest[i + dlen] = '\0';
	return (dlen + slen);
}
/*
#include <stdio.h>
int main(void)
{
	char	dest[200] = "12345";
	char	src[] = "6789ABC";
	
	printf("%u \n",ft_strlcat(dest, src, 5));
	printf("%s \n", dest);
	return 0;
}
*/