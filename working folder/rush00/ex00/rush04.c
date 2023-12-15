#include <stdio.h>

void	ft_putchar(char    c);

void	repeat_char(char	c, int	time)
{
	int	i;
	
	i = 0;
	while (i < time)
	{
		ft_putchar(c);
		i ++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 0; //Current line location
	while (i < y)
	{
		char	left_char;
		char	mid_char;
		char	right_char;

		// First line
		if (i == 0)
		{
			left_char = 'A';
			mid_char = 'B';
			right_char = 'C';
		}
		// Last line
		else if (i == y -1)
		{
			left_char = 'C';
			mid_char = 'B';
			right_char = 'A';
		}
		else
		{
			left_char = 'B';
			mid_char = ' ';
			right_char = 'B';
		}

		ft_putchar(left_char);
		repeat_char(mid_char, x -2);
		if (x != 1)
		{
			ft_putchar(right_char);
		}
		ft_putchar('\n');

		i ++;
	}
}
