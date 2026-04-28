#include <stddef.h>
#include <stdio.h>

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
				d[i] = s[i];
        }        return (dest);
}

int main(void)
{
        char str[10] = "abcdefg";

        printf("before: %s\n", str);
        ft_memmove(str, str + 2, 5);
        printf("after : %s\n", str);
}
