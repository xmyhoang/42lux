char *ft_strstr(char *str, char *to_find)
{
	if (*str == '\0')
		return (str);
	while (*str != '\0')
	{
		while (*str == *to_find &&  *to_find != '\0')
		{
			str ++;
			to_find ++;
		}
		if (*to_find == '\0')
			return (char *)str;
		str ++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%s \n", ft_strstr("123ABC", "123"));
	printf("%s \n", ft_strstr("xyz123ABC", "123ABC"));
	printf("%s \n", ft_strstr("123ABCxyz", "123ABC"));
	printf("%s \n", ft_strstr("123", "ABC"));
	return 0;
}
