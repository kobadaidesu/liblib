int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        c += 'a' - 'A';
    return c;
}

#include <stdio.h>

int main(void)

{
    printf("%c", ft_tolower('a'));
    printf("%c", ft_tolower('A'));
}
