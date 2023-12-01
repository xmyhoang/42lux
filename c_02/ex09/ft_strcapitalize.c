/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:19:33 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 18:19:36 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	upcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
}

void	lowcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' ')
			upcase(str, i);
		else
			lowcase(str, i);
		i ++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	char	str[1000] = "salut, comment tu vas ?
	 42mots quarante-deux; cinquante+et+un";
	printf("%s \n", ft_strcapitalize(str));
	return 0;
}
*/