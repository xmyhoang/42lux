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

#include <stdio.h>

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

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (!is_charset(str[i], charset))
		{
			count++;
		}
		i++;
	}
	return (count);
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

char	**split_copy_words(char *str, char *charset, char **result)
{
	int	c;
	int	i;
	int	word_start;

	c = 0;
	i = 0;
	word_start = 0;
	while (str[c] != '\0')
	{
		if (is_charset(str[c], charset)
			|| (str[c + 1] == '\0' && is_charset(str[c], charset)))
		{
			if (c - word_start > 0)
			{
				result[i] = (char *)malloc((c - word_start + 1) * sizeof(char));
				if (!result[i])
					return (0);
				ft_strncpy(result[i++], &str[word_start], c - word_start);
			}
			word_start = c + 1;
		}
		c++;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		result_len;

	result_len = ft_strlen_sep(str, charset);
	result = (char **)malloc((result_len + 1) * sizeof(char *));
	if (!result)
		return (0);
	result = split_copy_words(str, charset, result);
	return (result);
}

#include <stdio.h>
int main(void)
{
	char *str = ",AAAAA,AAA,A,,,,AAA,A,,";
	char *charset = ",";
	char **result = ft_split(str, charset);
	for (int i = 0; result[i]; i++)
	{
		if (result[i][0] == '\0')
			printf("Empty element found");
		if (result[i] == 0)
			printf("Last element reached");
		
		printf("%s\n", result[i]);
		free(result[i]);
	}
	return 0;
}