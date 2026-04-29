#include "libft.h"
#include <stdio.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

static void	*to_upper(void *content)
{
	char	*src;
	char	*result;
	int		i;

	src = (char *)content;
	result = strdup(src);
	if (!result)
		return (NULL);
	i = 0;
	while (result[i])
	{
		if (result[i] >= 'a' && result[i] <= 'z')
			result[i] -= 32;
		i++;
	}
	return (result);
}

static void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("[%s]", (char *)lst->content);
		if (lst->next)
			printf(" -> ");
		lst = lst->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*original;
	t_list	*mapped;
	char	*words[] = {"hello", "world", "42", NULL};
	int		i;

	original = NULL;
	i = 0;
	while (words[i])
	{
		ft_lstadd_back(&original, ft_lstnew(strdup(words[i])));
		i++;
	}

	printf("original: ");
	print_list(original);

	mapped = ft_lstmap(original, to_upper, free);
	printf("mapped:   ");
	print_list(mapped);

	printf("original (unchanged): ");
	print_list(original);

	ft_lstclear(&original, free);
	ft_lstclear(&mapped, free);
	return (0);
}