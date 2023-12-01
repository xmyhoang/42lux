/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:57:35 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/29 17:57:38 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i ++;
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	char	str[100] = "ab1d#";
	printf("%s \n", ft_strupcase(str));
	return 0;
}*/