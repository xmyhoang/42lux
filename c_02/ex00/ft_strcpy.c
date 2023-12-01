/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:55:53 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 17:55:57 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char	dest[1000] = "";

	ft_strcpy(dest, "Copy this line exceeding dest");
	printf("%s", dest);
	return (0);
}
*/
