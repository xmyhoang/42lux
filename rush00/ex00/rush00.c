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

void	rush(int  x, int  y)
{
	int i;

	i = 0; //Current line location
	// Special case
	if (x == 1)
	{
		if (y == 1)
		{
			ft_putchar('o');
			ft_putchar('\n');
		}
		else // if y != 1
		{
			while (i < y)
			{
				// if first or last line
				if (i == 0 || i == y -1)
				{
					ft_putchar('o');
				}
				else
				{
					ft_putchar('|');
				}
				ft_putchar('\n');
				i ++;
			}
		}
	}
	else
	{
		while (i < y)
		{
			char	edge_char;
			char	mid_char;

			// First and last line
			if (i == 0 || i == y -1)
			{
				edge_char = 'o';
				mid_char = '-';
			}
			else
			{
				edge_char = '|';
				mid_char = ' ';
			}

			ft_putchar(edge_char);
			repeat_char(mid_char, x -2);
			ft_putchar(edge_char);
			ft_putchar('\n');

			i ++;
		}
	}
}