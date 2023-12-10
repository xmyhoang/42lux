#include <stdlib.h>

#include <stdio.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

	i = 0;
	while(base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ' || base[i] == '-' || base[i] == '+')
		{
			return(0);
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

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	i;
	int	negative_sign;
	int	base_len;
	int	base_index;

	nb = 0;
	i = 0;
	base_len = ft_length(base);
	if (base_len >= 2)
	{
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
	}
	return (0);
	
}

int	base_nb_len (int nb, int base_len)
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

char	*decimal_to_base(int nb, char *base)
{
	char	*new_nb;
	int		new_len;
	int		base_len;
	int		is_negative;
	int		i;
	
	base_len = ft_length(base);
	new_len = base_nb_len(nb, base_len);
	is_negative = 0;
	if (nb < 0)
	{	
		new_len++;
		nb = -nb;
		is_negative = 1;
	}
	new_nb = malloc((new_len + 1) * sizeof(char));
	if (!new_nb)
		return(0);
	i = 0;

	while (i < new_len)
	{
		new_nb[new_len - i - 1] = base[nb % base_len];
		nb /= base_len;
	
		//printf("Adding at position %d digit %c\n Next div is %d\n", new_len - i - 1, new_nb[new_len - i - 1], nb);

		i++;
	}
	new_nb[i] = '\0';
	if (is_negative)
	{
		new_nb[0] = '-';	
	}
	return (new_nb);
}

char 	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	new_int;

	if (validate_base(base_from) == 0 || validate_base(base_to) == 0)
	{
		return (NULL);
	}
	new_int = ft_atoi_base(nbr, base_from);
	
	nbr = decimal_to_base(new_int, base_to);

	return (nbr);
}

#include <stdio.h>
int main(void)
{
	char *nbr = " 10 1234654";
	char *base_from = "0123456789";
	char *base_to = "01";
	//printf("%s to base int : %d\n", nbr, ft_atoi_base(nbr, base_from));
	printf("Result: %s\n", ft_convert_base(nbr, base_from, base_to));
	return 0;
}