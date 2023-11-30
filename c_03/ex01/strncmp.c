int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0') && (i < n))
		i ++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d \n", ft_strncmp("abc", "abz", 0));
	printf("%d \n", ft_strncmp("abc", "abz", 2));
	printf("%d \n", ft_strncmp("abc", "12a", 0));
}*/