int ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb -- ;
	}
	if (nb < 0)
		return (0);
	return (result);
}

#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_recursive_factorial(4));
	printf("%d \n", ft_recursive_factorial(-4));
	return 0;
}
