int isalnum(int c)
{
	if((c >= 0 && c <= 9) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	return 0;
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", isalnum(5));
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum(','));
}
