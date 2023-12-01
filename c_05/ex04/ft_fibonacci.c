int ft_fibonacci(int index)
{
	if (index < 0)
		return (0);
	if (index < 2)
		return (index);
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d \n",ft_fibonacci(1));
	printf("%d \n",ft_fibonacci(2));
	printf("%d \n",ft_fibonacci(3));
	printf("%d \n",ft_fibonacci(6));
	return (0);
}*/