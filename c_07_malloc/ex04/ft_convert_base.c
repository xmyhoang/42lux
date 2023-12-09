
#include <stdio.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;

	printf("String length is %d\n", i);

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

	printf("str[i] 's i INSIDE whitespace func is %d\n", i);

	return (count);
}

int	validate_base(char	*base)
{
	int	i;

	i = 0;
	while(base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ' || base[i] == '-' || base[i] == '+')
		{
			return(0);
		}
		if (base[i] == base[i + 1])
			return (0);
		i++;
	}

	printf("Base validation PASSED\n");

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
			printf("The digit's base index is %d\n", i);
			return (i);
		}
		i++;
	}

	printf("Digit not found in base\n");

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

		//printf("Before while \n");

		while (str[i])
		{

			printf("str[i] 's i is%d \n", i);

			negative_sign = whitespace_sign(str, &i);

			printf("str[i] 's i AFTER whitespace func is %d\n", i);

			base_index = find_base_index(str[i], base);
			while (base_index != -1)
			{

				printf("Inside while loop base_index \n");

				nb = nb * base_len + base_index;
				i++;
				base_index = find_base_index(str[i], base);
			}
			return (nb *= negative_sign);
		}
	}
	return (0);
	
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (validate_base(base_from) == 0 || validate_base(base_to) == 0)
	{
		return (0);
	}
	ft_atoi_base(nbr, base_from);
}

#include <stdio.h>
int main(void)
{
	//printf("%s\n", ft_convert_base(" +--123a456", 10, 2));
	printf("%d\n", ft_atoi_base("  ---101478abca", "01"));
	return 0;
}