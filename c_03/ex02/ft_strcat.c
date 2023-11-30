char *ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest ++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (dest);
}

/*#include <stdio.h>
int main(void)
{
	char	dest[200] = "Hello";
	char	src[] = " World";
	
	ft_strcat(dest, src);
	printf("%s \n", dest);
	return 0;
}*/
