unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	new_len;

	new_len = 0;
	while (*dest != '\0')
	{
		dest ++;
		new_len ++;
	}

	while (*src != '\0' && size > 0)
	{
		*dest = *src;
		dest ++;
		src ++;
		size --;
		new_len ++;
	}
	*dest = '\0';
	return (new_len);
}

/*#include <stdio.h>
int main(void)
{
	char	dest[200] = "Hello";
	char	src[] = " World";
	
	printf("%u \n",ft_strlcat(dest, src, 3));
	printf("%s \n", dest);
	return 0;
}*/
