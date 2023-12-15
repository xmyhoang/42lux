/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:12:17 by thihoang          #+#    #+#             */
/*   Updated: 2023/12/11 14:12:20 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_empty_str(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] != ' ' && (str[i] < 9 || str[i] > 13)
			&& str[i] != '-' && str[i] != '+')
			return (0);
		i++;
	}
	return (1);
}

int	whitespace_sign(char *str, int *ptr_i)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			count *= -1;
		}
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	validate_base(char	*base)
{
	int	i;
	int	j;

	if (ft_length(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' '
			|| base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	find_base_index(char digit, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (digit == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
