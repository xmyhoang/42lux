#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int	i = 0;
	while (i < argc)
	{
		int	value = atoi(argv[i]);
		printf("%d\n", abs(value));
		i++;
	}
	return 0;
}
