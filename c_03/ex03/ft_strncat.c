char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	while (*dest != '\0')
	{
		dest ++;
	}

	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest ++;
		src ++;
		nb --;
	}
	*dest = '\0';
	return (dest);
}

/*#include <stdio.h>
int main(void)
{
	char	dest[200] = "Hello";
	char	src[] = " World";
	
	ft_strncat(dest, src, 3);
	printf("%s \n", dest);
	return 0;
}*/
