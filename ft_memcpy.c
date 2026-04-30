#include "libft.h"
#include <stdio.h>

static void	print_bytes(unsigned char *p, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		printf("%3u ", p[i]);
		i++;
	}
	printf("\n");
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	unsigned char	src[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	unsigned char	dst[8] = {0};
	unsigned char	dst2[8] = {0};

	printf("src:         "); print_bytes(src, 8);

	ft_memcpy(dst, src, 8);
	printf("full copy:   "); print_bytes(dst, 8);

	ft_memcpy(dst2, src, 4);
	printf("half copy:   "); print_bytes(dst2, 8);

	ft_memcpy(dst, src, 0);
	printf("n=0 (no change): "); print_bytes(dst, 8);

	return (0);
}
