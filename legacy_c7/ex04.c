#include <stdlib.h>

int	ft_length(char *str);
int	whitespace_sign(char *str, int *ptr_i);
int	validate_base(char	*base);
int	find_base_index(char digit, char *base);

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

char	*decimal_to_base(long nb, char *base)
{
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
		return (0);
	i = 0;
	store_digit(nb, base)

	char	*new_nb;
	int		new_len;
	int		base_len;

	while (i < new_len)
	{
		new_nb[new_len - i - 1] = base[nb % base_len];
		nb /= base_len;
		i++;
	}
	new_nb[i] = '\0';
	if (is_negative)
		new_nb[0] = '-';
	return (new_nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	decimal;

	if (validate_base(base_from) == 0 || validate_base(base_to) == 0)
	{
		return (NULL);
	}
	decimal = ft_atoi_base(nbr, base_from);
	nbr = decimal_to_base(decimal, base_to);
	return (nbr);
}

#include <stdio.h>
int main(void)
{
	char *nbr = "   --+-2147483648";
	char *base_from = "0123456789";
	char *base_to = "0123456789ABCDEF";
	printf("%s to base int : %ld\n", nbr, ft_atoi_base(nbr, base_from));
	printf("Result: %s\n", ft_convert_base(nbr, base_from, base_to));
	return 0;
}