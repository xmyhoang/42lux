/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:55:35 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/02 14:55:42 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ten_power(int power)
{
	int	result;

	result = 1;
	while (power != 0)
	{	
		result *= 10;
		power --;
	}
	return (result);
}

int	ft_str_int(int digits[], int int_len, int positive_check)
{
	int	i;
	int	new_int;

	i = 0;
	int_len -= 1;
	new_int = 0;
	while (i <= int_len)
	{
		digits[i] -= 48;
		new_int += (digits[i] * ten_power(int_len - i));
		i ++;
	}
	if (positive_check < 0 && positive_check % 2 != 0)
	{
		new_int = -new_int;
	}
	return (new_int);
}

int	ft_atoi(char	*str)
{
	int	new_int;
	int	positive_check;
	int	digits[100];
	int	int_len;

	new_int = 0;
	positive_check = 0;
	int_len = 0;
	while (*str != '\0')
	{
		if (*str == '-')
			positive_check --;
		else if (*str == '+')
			positive_check ++;
		else if (*str >= '0' && *str <= '9')
		{
			digits[int_len] = *str;
			int_len ++;
		}
		else if (*str != ' ' || (*str <= 9 && *str >= 13))
			break ;
		str ++;
	}
	new_int = ft_str_int(digits, int_len, positive_check);
	return (new_int);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_atoi(" ---+--+1234ab567"));
	printf("%d \n", ft_atoi(" ---+--+1234"));
	printf("%d \n", ft_atoi(" ---+---+-2147483648"));
	printf("%d \n", ft_atoi(" --0123"));
	return 0;
}
*/
