#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(!lst)
		return NULL;
	while(lst->next)
		lst = lst->next;
	return lst;
}

// int	main(void)
// {
// 	t_list	*lst;
//
// 	lst = ft_lstnew(ft_strdup("A"));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("B")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("C")));
// 	printf("last: %s\n", (char *)ft_lstlast(lst)->content);
// 	printf("NULL: %p\n", (void *)ft_lstlast(NULL));
// }
