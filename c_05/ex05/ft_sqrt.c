int	ft_sqrt(int	nb)
{
	int	sqrt;

	sqrt = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (sqrt * sqrt != nb)
	{
		if (sqrt == nb || sqrt > 46340)
			return (0);
		sqrt ++;
	}
	return (sqrt);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_sqrt(4));
	printf("%d \n", ft_sqrt(9));
	printf("%d \n", ft_sqrt(25));
	printf("%d \n", ft_sqrt(10));
	return 0;
}*/