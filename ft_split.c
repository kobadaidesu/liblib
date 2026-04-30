#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	ft_free_result(char **result, int n)
{
	while (n > 0)
		free(result[--n]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_len;
	int		i;

	if (!s)
		return (NULL);
	result = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			result[i] = ft_substr(s, 0, word_len);
			if (!result[i])
			{
				ft_free_result(result, i);
				return (NULL);
			}
			i++;
			s += word_len;
		}
	}
	result[i] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	**res;
// 	int		i;
//
// 	res = ft_split("hello world foo", ' ');
// 	i = 0;
// 	while (res[i])
// 		printf("[%s]\n", res[i++]);
// 	printf("---\n");
// 	res = ft_split(",,a,,b,,", ',');
// 	i = 0;
// 	while (res[i])
// 		printf("[%s]\n", res[i++]);
// }