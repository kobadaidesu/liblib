#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_str;
    size_t len;
    size_t i;
    size_t j;
    size_t len1;
    size_t len2;

    if(!s1 || !s2)
        return NULL;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    new_str = (char *)malloc(sizeof(char) *  (len1 + len2 + 1));
    if(!new_str)
        return NULL;
    i = 0;
    
    while(i < len1)
    {
        new_str[i] = s1[i];
        i++ ;
    }
    j = 0;
    while(j < len2)
    {
        new_str[i + j] = s2[j];
        j++ ;
    }
    new_str[i + j] = '\0';
    return new_str;
}

int main(void)
{
    printf("%s\n", ft_strjoin(NULL, "eo"));
}