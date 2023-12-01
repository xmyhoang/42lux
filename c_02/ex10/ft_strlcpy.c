/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:19:43 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 18:19:48 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i ++;
		src_len++;
	}
	dest[i] = '\0';
	src_len = ft_strlen(src);
	return (src_len);
}

/*#include <stdio.h>
int main(void)
{
	char	dest[100];
	printf("%u \n", ft_strlcpy(dest, "Source Text", 10));
	printf("%s \n", dest);
	return 0;
}*/
