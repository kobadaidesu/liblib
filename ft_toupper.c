int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        c -= 'a' - 'A';
    return c;
}

#include <stdio.h>

int main(void)

{
    printf("%c", ft_toupper('a'));
    printf("%c", ft_toupper('K'));
}
