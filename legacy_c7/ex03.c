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

int	ft_strlen(char	*strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
		i ++;
	return (i);
}

int	ft_final_len(int size, char **strs, char *sep)
{
	int	final_len;
	int	i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += ft_strlen(strs[i]);
		i ++;
	}
	final_len += (size - 1) * ft_strlen(sep);
	return (final_len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		cat_i;
	int		i;
	int		final_len;
	char	*cat_str;
	char	*final_str;

	if (size <= 0)
	{
		return ((char *)malloc(sizeof(char)));
	}
	final_len = ft_final_len(size, strs, sep);
	final_str = (char *)malloc((final_len + 1) * sizeof(char));
	cat_str = final_str;
	if (!cat_str)
		return (0);
	i = 0;
	cat_i = 0;
	while (i < size)
	{	
		ft_strcpy(cat_str, strs[i]);
		cat_str += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(cat_str + cat_i, sep);
			cat_str += ft_strlen(sep);
		}
		i++;
	}
	return (final_str);
}

/*#include <stdio.h>
int main(void)
{	
	int		size;
	char	**strs;
	char	*sep;
	char	*result;
	// INPUTS
	size = 3;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = "STR1";
	strs[1] = "STR2";
	strs[2] = "STR3";
	sep = "++";
	printf("RESULT:\n%s\n", result = ft_strjoin(size, strs, sep));
	free(result);
	return(0);
}*/
