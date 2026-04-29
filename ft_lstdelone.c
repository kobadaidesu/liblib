#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if(!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}

// void del(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	t_list *node = ft_lstnew(malloc(10));
// 	ft_lstdelone(node, del);
// }