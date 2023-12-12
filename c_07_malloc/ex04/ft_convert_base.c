/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:12:11 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/11 14:12:13 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_length(char *str);
int	whitespace_sign(char *str, int *ptr_i);
int	validate_base(char	*base);
int	is_null(void *ptr);
int	is_empty_str(char *str);
int	find_base_index(char digit, char *base);
//int	base_nb_len(int nb, int base_len);

int	base_nb_len(int nb, int base_len)
{
	int	i;

	i = 0;
	while (nb / base_len != 0)
	{
		nb /= base_len;
		i++;
	}
	return (i + 1);
}

long	ft_atoi_base(char *str, char *base)
{
	long	nb;
	int		i;
	int		negative_sign;
	int		base_len;
	int		base_index;

	nb = 0;
	i = 0;
	base_len = ft_length(base);
	while (str[i])
	{
		negative_sign = whitespace_sign(str, &i);
		base_index = find_base_index(str[i], base);
		while (base_index != -1)
		{
			nb = nb * base_len + base_index;
			i++;
			base_index = find_base_index(str[i], base);
		}
		return (nb *= negative_sign);
	}
	return (0);
}

char	*put_base(long nb, char *base, int nb_len, int base_len)
{
	int		i;
	char	*new_nb;

	new_nb = malloc((nb_len + 1) * sizeof(char));
	i = 0;
	while (i < nb_len)
	{
		new_nb[nb_len - i - 1] = base[nb % base_len];
		nb /= base_len;
		i++;
	}
	new_nb[i] = '\0';
	return (new_nb);
}

char	*decimal_to_base(long nb, char *base)
{
	char	*result;
	int		base_len;
	int		new_len;
	int		is_negative;

	base_len = ft_length(base);
	new_len = base_nb_len(nb, base_len);
	is_negative = 0;
	if (nb < 0)
	{
		is_negative = 1;
		new_len++;
		nb = -nb;
	}
	result = put_base(nb, base, new_len, base_len);
	if (is_negative)
		result[0] = '-';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	decimal;

	if (is_empty_str(nbr)
		|| validate_base(base_from) == 0
		|| validate_base(base_to) == 0)
		return (NULL);
	decimal = ft_atoi_base(nbr, base_from);
	nbr = decimal_to_base(decimal, base_to);
	return (nbr);
}

/*#include <stdio.h>
int main(void)
{
	char *nbr = "   --+-2147483647";
	//char *nbr = " + -";
	char *base_from = "0123456789";
	char *base_to = "01";
	//printf("%s to base int (decimal) : %ld\n", nbr, ft_atoi_base(nbr, base_from));
	printf("Result: %s\n", ft_convert_base(nbr, base_from, base_to));
	return 0;
}*/