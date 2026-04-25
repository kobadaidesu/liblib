#include <stddef.h>

size_t ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i] != '\0')
		i++ ;
	return i;
}

//#include <stdio.h>

//int main(void)
//{
//	printf("%zu\n", ft_strlen("aiueo"));
//}
