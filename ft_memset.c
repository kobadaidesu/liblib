#include <stddef.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ss;

	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ss[i] = (unsigned char)c;
		i++;
	}
	return s;
}

//int main(void)
//{
//	char str[] = "aaaaaiiiiii";

//	ft_memset(str, '5', 5);
//	printf("%s\n", str);

//	return 0;
//}
