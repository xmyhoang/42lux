/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:40:22 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/01 20:40:25 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%s \n", ft_strstr("123ABC", "ABC"));
	printf("%s \n", ft_strstr("xyz123ABC456", "123ABC"));
	printf("%s \n", ft_strstr("123ABCxyz", "123ABC"));
	printf("%s \n", ft_strstr("123", "ABC"));
	return 0;
}
*/