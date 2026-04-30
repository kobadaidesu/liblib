#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return s;
}

static void	print_bytes(unsigned char *p, size_t n)
{
	size_t	i = 0;

	while (i < n)
	{
		printf("%3u ", p[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	unsigned char	buf[8] = {'a', 'b', 0, 'c', 'd', 0, 'e', 'f'};

	print_bytes(buf, 8);

	ft_memset(buf, 'X', 8);

	print_bytes(buf, 8);

	return (0);
}