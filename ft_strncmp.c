#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if(s1[i] != s2[i])
            return (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
        if(s1[i] == '\0')
            return 0;
        i++ ;
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", strncmp("abe", "abc", 3));
	printf("%d\n", strncmp("abc", "abd", 3));
	printf("%d\n", strncmp("abd", "abc", 3));
	printf("%d\n", strncmp("abc", "abd", 2));
	printf("%d\n", strncmp("abc", "xyz", 3));
	printf("%d\n", strncmp("abc", "abcd", 4));
	return (0);
}
