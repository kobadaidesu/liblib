#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

void f_toupper(void *content)
{
    char *str = (char *)content;
    int i = 0;
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
}

void f_print(void *content)
{
    ft_printf("%s\n", (char *)content);
}

// int main(void)
// {
//     t_list *node1 = ft_lstnew(ft_strdup("hello"));
//     t_list *node2 = ft_lstnew(ft_strdup("world"));
//     node1->next = node2;

//     ft_lstiter(node1, f_print);
//     // 出力：
//     // hello
//     // world

//     ft_lstiter(node1, f_toupper);
//     ft_lstiter(node1, f_print);
//     // 出力：
//     // HELLO
//     // WORLD
// }