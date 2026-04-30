#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("hello", 'l'));
// 	printf("%s\n", ft_strrchr("hello", 'h'));
// 	printf("%p\n", (void *)ft_strrchr("hello", 'z'));
// 	printf("%s\n", ft_strrchr("hello", '\0'));
// }
