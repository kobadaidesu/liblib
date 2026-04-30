#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *p1;
    unsigned char *p2;
    size_t i;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
	if (p1[i] != p2[i])
		return (p1[i] - p2[i]);
    i++ ;
    }
    return 0;
}

#include <stdio.h>

int	main(void)
{
	unsigned char	a[4] = {1, 2, 3, 4};
	unsigned char	b[4] = {1, 2, 3, 5};
	unsigned char	c[4] = {1, 2, 3, 4};

	printf("a == c: %d\n", ft_memcmp(a, c, 4));
	printf("a <  b: %d\n", ft_memcmp(a, b, 4));
	printf("b >  a: %d\n", ft_memcmp(b, a, 4));
	printf("n=0:    %d\n", ft_memcmp(a, b, 0));
	printf("3byte:  %d\n", ft_memcmp(a, b, 3));

	return (0);
}