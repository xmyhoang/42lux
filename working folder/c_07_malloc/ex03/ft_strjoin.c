/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:11:19 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/08 19:11:21 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	int		length;
	int		i;

	i = 0;
	length = 0;
	while (i < size)
		length += ft_strlen(strs[i++]);
	length += (size - 1) * ft_strlen(sep);
	if (size <= 0)
		final = (char *)malloc(sizeof(char));
	else
		final = (char *)malloc((length + 1) * sizeof(char));
	final[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(final, strs[i]);
		if (i < size - 1)
			ft_strcat(final, sep);
		i++;
	}
	return (final);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	char *final;

	final = ft_strjoin(--argc, ++argv, "++");
	printf("%s", final);
	free(final);
	return (0);
}*/