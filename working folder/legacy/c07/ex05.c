/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:11:33 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/08 19:11:38 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	count_charset(char *str, char *charset)
{
	int	i;
	int	found_qty;

	i = 0;
	found_qty = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset))
			found_qty++;
		i++;
	}
	return (found_qty);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		result_len;
	int		word_len;
	int		s;
	int		i;
	int		word_start;

	result_len = ft_strlen(str) - count_charset(str, charset) + 1;
	result = (char **)malloc(result_len * sizeof(char *));
	if (!result)
		return (0);

	s = 0;
	i = 0;
	word_start = 0;
	while (str[s] != '\0')
	{
		if (is_charset(str[s], charset) == 0)
		{
			word_len = s - word_start + 1;
			result[i] = (char *)malloc(word_len * sizeof(char));
			if (!result[i])
				return (0);
			ft_strncpy(result[i], &str[word_start], word_len);
			result[i][word_len] = '\0';
		}
		else
		{
			i++;
			word_start = i + 1;
		}
		i++;
	}

	
	return (result);
}

/*#include <stdio.h>
int main(void)
{
	char *str = "HADS$KF H$A$SFD#S#";
	char *charset = "$#";
	char **result = ft_split(str, charset);
	for (int i = 0; result[i]; i++)
	{
		printf("%s\n", result[i]);
		free(result[i]);
	}
	free(result);
	return 0;
}*/
