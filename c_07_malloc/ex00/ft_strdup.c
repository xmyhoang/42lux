/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:10:29 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/08 19:10:32 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_strcpy(dest, src);
	return (dest);
}

/*#include <stdio.h>
int main(void)
{
	char	*src = "SOURCE";
	char	*dest = "";

	printf("%s\n", dest = ft_strdup(src));
	return 0;
}*/
