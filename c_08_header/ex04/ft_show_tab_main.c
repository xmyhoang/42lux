#include <unistd.h>
#include "ft_stock_str.h"

#include "ft_strs_to_tab.c"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int	digit;

	if (nb == -2147483648)
	{
		write(1,"-2",2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
	}
	
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

void ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

int main(int argc, char *argv[])
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
}
