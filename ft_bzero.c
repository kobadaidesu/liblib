#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//#include <stdio.h>

//int main(void)
//{
//	char str[10] = "aaaaaaaa";
//	ft_bzero(str, 5);
//	printf("%s\n", str + 8);
//	return 0;
//}
