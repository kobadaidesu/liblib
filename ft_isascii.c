int ft_isascii(int c)
{
	if(c >= 0 && c <= 177)
		return 1;
	return 0;
}

//#include <stdio.h>

//int main(void)
//{
//	printf("%d\n", ft_isascii(188));
//	printf("%d\n", ft_isascii(177));
//	printf("%d\n", ft_isascii(0));
//}
