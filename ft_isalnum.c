#include "libft.h"

int ft_isalnum(int c)
{
	//if((c >= 0 && c <= 9) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	if(ft_isalpha(c) || ft_isdigit(c))
		return 1;
	return 0;
}

//#include <stdio.h>

//int main(void)
//{
//	printf("%d\n", ft_isalnum(5));
//	printf("%d\n", ft_isalnum('a'));
//	printf("%d\n", ft_isalnum(','));
//}
