#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	unsigned char	buf[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	unsigned char	*result;

	result = ft_memchr(buf, 4, 8);
	printf("found 4:    %d\n", *result);

	result = ft_memchr(buf, 1, 8);
	printf("first elem: %d\n", *result);

	result = ft_memchr(buf, 9, 8);
	printf("not found:  %s\n", result ? "found" : "(null)");

	result = ft_memchr(buf, 1, 0);
	printf("n=0:        %s\n", result ? "found" : "(null)");

	return (0);
}
