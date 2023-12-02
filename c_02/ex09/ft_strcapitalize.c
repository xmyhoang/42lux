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
int	check_alpha_num(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

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
		if (i == 0 || check_alpha_num(str[i - 1]) == 0)
			upcase(str, i);
		else
			lowcase(str, i);
		i ++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char	str[1000] = "a42mots ?quaran#te-deux;cinquante+et+un";
	printf("%s \n", ft_strcapitalize(str));
	return 0;
}
*/