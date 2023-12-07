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

char **ft_split(char *str, char *charset)
{
	char	**split;
	int		split_len;
	int		word_len;
	int		i;
	int		split_i;
	int		word_start;

	split_len = ft_strlen(str) - count_charset(str, charset) + 1;
	split = (char **)malloc(split_len * sizeof(char *));
	if (!split)
	{
		return (0);
	}
	i = 0;
	split_i = 0;
	word_start = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 0)
		{
			word_len = i - word_start + 1;
			split[split_i] = (char *)malloc(word_len * sizeof(char));
			if (!split[split_i])
			{
				return (0);
			}
			ft_strncpy(split[split_i], &str[word_start], word_len);
			split[split_i][word_len] = '\0';
		}
		else
		{
			split_i++;
			word_start = i + 1;
		}
		i++;
	}
	return (split);
}

/*#include <stdio.h>
int main(void)
{
	char *str = "HA DS$KF H$A$SFD#S#";
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
