#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new_str;
    size_t i;
    size_t s_len;

    if (!s)
        return NULL;
    s_len = ft_strlen(s);
    if(start >= s_len)
    {
        new_str = malloc(1);   
        if(!new_str)
            return NULL;
        new_str[0] = '\0';
        return new_str;
    }
    if (len > s_len - start)
        len = s_len - start;
    new_str = (char *)malloc(sizeof(char) * (len + 1));
    if(!new_str)
        return NULL;
    i = 0;
    while(i < len)
    {
        new_str[i] = s[start + (unsigned int)i];
        i++ ;
    }
    new_str[i] = '\0';
    return new_str;
}

int main(void)
{
    printf("%s\n", ft_substr("Hello, World", 7, 5));
}