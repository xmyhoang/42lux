int ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
	{
		return (0);
	}
	while (i * i <= nb && i <= 46340)
	{
		if (i % 2 != 0)
		{
			if (nb % i == 0)
				return (0);
		}
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb ++;
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_find_next_prime(6));
	printf("%d \n", ft_find_next_prime(1));
	printf("%d \n", ft_find_next_prime(-5));
	printf("%d \n", ft_find_next_prime(2147483647));
	printf("%d \n", ft_find_next_prime(-2147483647));
	return 0;
}
*/