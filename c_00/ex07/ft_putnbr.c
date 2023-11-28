#include <unistd.h>

void	ft_putnbr(int nb)
{
	int digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

int main(void)
{
	ft_putnbr(9);
	return (0);
}