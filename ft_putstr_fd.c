#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if(!s)
        return ;
    while(*s)
    {
        write(fd, s, 1);
        s++ ;
    }

}

// int main(void)
// {
//     ft_putstr_fd("aiueo", 1);
// }