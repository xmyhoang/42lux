
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
	while (str[i] >= 9 && str[i] <= 13)
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
			negative_sign = whitespace_sign(str, &i);
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

/*char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	validate_base(base_from);

	validate_base(base_to);

	ft_atoi_base(nbr, base_to);
}*/

#include <stdio.h>
int main(void)
{
	//printf("%s\n", ft_convert_base(" +--123a456", 10, 2));
	printf("%d\n", ft_atoi_base("--478abca", "0123456789a"));
	return 0;
}