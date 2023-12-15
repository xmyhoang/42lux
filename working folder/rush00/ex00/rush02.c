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
	// TESTING ONLY
	printf("X is %d \n", x);
	printf("Y is %d \n", y);

	while (i < y)
	{
		char	edge_char;
		char	mid_char;

		// First line
		if (i == 0)
		{
			edge_char = 'A';
			mid_char = 'B';
		}
		// Last line
		else if (i == y -1)
		{
			edge_char = 'C';
			mid_char = 'B';
		}
		else
		{
			edge_char = 'B';
			mid_char = ' ';
		}

		ft_putchar(edge_char);
		repeat_char(mid_char, x -2);
		if (x != 1)
		{
			ft_putchar(edge_char);
		}
		ft_putchar('\n');

		i ++;
	}
}
