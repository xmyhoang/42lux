/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdax <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 01:52:49 by cdax              #+#    #+#             */
/*   Updated: 2023/12/12 01:52:52 by cdax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		if (c == sep[i++])
			return (1);
	if (!c)
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i + 1], charset) == 1
			&& ft_is_sep(str[i], charset) == 0)
			count++;
		i++;
	}
	return (count);
}

void	fill_word(char *to, char *from, char *charset)
{
	int	i;

	i = 0;
	while (!(ft_is_sep(from[i], charset)))
	{
		to[i] = from[i];
		i++;
	}
	to[i] = 0;
}

void	fill_array(char **result, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (ft_is_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_is_sep(str[i + j], charset) == 0)
				j++;
			result[k] = (char *)malloc(sizeof(char) * (j + 1));
			fill_word(result[k], str + i, charset);
			k++;
			i += j;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		word_count;
	char	**out;

	word_count = count_words(str, charset);
	out = (char **)malloc(sizeof(char *) * (word_count + 1));
	out[word_count] = 0;
	fill_array(out, str, charset);
	return (out);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	argc += 0;
	char **result = ft_split(argv[1], argv[2]);
	int i = 0;
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		i++;
	}
}
