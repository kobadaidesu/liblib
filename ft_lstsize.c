#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}

int main(void)
{
    t_list *lst;
    t_list *node1;
    t_list *node2;
    t_list *node3;

    node1 = ft_lstnew("A");
    node2 = ft_lstnew("B");
    node3 = ft_lstnew("C");

    lst = NULL;
    ft_lstadd_front(&lst, node3);
    ft_lstadd_front(&lst, node2);
    ft_lstadd_front(&lst, node1);

    printf("リストのサイズ: %d\n", ft_lstsize(lst));  // 出力: 3
    printf("空リストのサイズ: %d\n", ft_lstsize(NULL)); // 出力: 0

    return (0);
}
