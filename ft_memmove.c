#include <stddef.h>
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

void *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char	*d;
        const unsigned char	*s;
        size_t i;

        d = (unsigned char *)dest;
        s = (const unsigned char *)src;

        if (d > s)
        {
                while (n > 0)
                {
                        n--;
                        d[n] = s[n];
                }
        }
        else
        {
			i = 0;
			while (n--)
			{
				d[i] = s[i];
				i++;
			}
        }        return (dest);
}

int	main(void)
{
	unsigned char	buf1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	unsigned char	buf2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	unsigned char	buf3[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	printf("before:          "); print_bytes(buf1, 8);

	ft_memmove(buf1, buf1 + 2, 5);
	printf("dest<src overlap:"); print_bytes(buf1, 8);

	ft_memmove(buf2 + 2, buf2, 5);
	printf("dest>src overlap:"); print_bytes(buf2, 8);

	ft_memmove(buf3, buf3, 0);
	printf("n=0 (no change): "); print_bytes(buf3, 8);

	return (0);
}
