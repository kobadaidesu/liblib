#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(s);
    while(i < len + 1)
    {
        if(s[i] == (char)c)
            return (char *)&s[i];
        i++ ;
    }
    return NULL;
}

#include <stdio.h>

int main(void)
{
    char str[10] = "iueoaiueo";
    printf("%s\n", ft_strchr(str, 'a'));
}