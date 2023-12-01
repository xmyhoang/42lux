/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:19:23 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 18:19:25 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i ++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	char	str[100] = "AB1d#";
	printf("%s \n", ft_strlowcase(str));
	return 0;
}*/