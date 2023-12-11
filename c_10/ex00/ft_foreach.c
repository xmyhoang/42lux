void	ft_putnum(int nb)
{
	int	digit;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
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

void	ft_foreach(int *tab, int length, void(*f)(int))
{

}

int main(void)
{
	int	*tab[6];

	tab = {1, 2, 3, 4, 5};
	ft_foreach(tab, 5, &ft_putnbr);
	return 0;
}