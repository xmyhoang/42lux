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

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (!charset)
		return (1);
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

void	fill_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && !(is_charset(src[i], charset)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	split_copy_words(char **result, char *str, char *charset)
{
	int	i;
	int	wlen;
	int	substr;

	i = 0;
	substr = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset))
		{
			wlen = 0;
			while (!is_charset(str[i + wlen], charset))
				wlen++;
			result[substr] = (char *)malloc((wlen + 1) * sizeof(char));
			fill_word(result[substr], str + i, charset);
			substr++;
			i += wlen;
		}
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		result_len;

	result_len = ft_strlen_sep(str, charset);
	if (charset[0] == '\0' || str[0] == '\0')
	{
		return (NULL);
	}
	result = (char **)malloc((result_len + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[result_len] = 0;
	split_copy_words(result, str, charset);
	return (result);
}

/*#include <stdio.h>
int main(void)
{
	//THIS TEST FAILED LAST TIME
	char *str = ",AAAAAc.,AAA,A,,,,AAA,A,,AAAAAAAAAAAAAAAAAA,,,,,,,,,,,,,, .a";
	char *charset = "Ac";
	//char *charset = "";
	
	//char *str = "1*2345**6789";
	//char *charset = "*";
	char **result = ft_split(str, charset);
	if (result == NULL)
	{
		printf("[main] INPUT EMPTY\n");
	}
	else
	{
		for (int i = 0; result[i]; i++)
		{
			if (result[i][0] == '\0')
				printf("Empty element found");
			
			printf("%s\n", result[i]);
			free(result[i]);
		}
	}
	return 0;
}*/
