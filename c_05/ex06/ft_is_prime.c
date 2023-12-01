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

#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_is_prime(7));
	printf("%d \n", ft_is_prime(1));
	printf("%d \n", ft_is_prime(-5));
	printf("%d \n", ft_is_prime(32));
	printf("%d \n", ft_is_prime(11));
	return 0;
}