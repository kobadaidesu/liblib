#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = (t_list *)malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->content = content;
    node->next = NULL;
    return node;
}

// int	main(void)
// {
// 	t_list	*node;
//
// 	node = ft_lstnew("hello");
// 	printf("content: %s\n", (char *)node->content);
// 	printf("next:    %p\n", (void *)node->next);
// 	node = ft_lstnew(NULL);
// 	printf("NULL content: %p\n", node->content);
// }
