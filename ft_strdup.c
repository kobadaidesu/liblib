#include "libft.h"

char *ft_strdup(const char *s)
{
    char *ptr;
    size_t i;
    size_t len;

    len = ft_strlen(s);
    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if(!(ptr))
        return NULL;

    i = 0;
    while(i < len)
    {
        ptr[i] = s[i];
        i++ ;
    }
    ptr[i] = '\0';
    return ptr;
}

int main(void)
{
    printf("%s", ft_strdup("aiueo"));
}