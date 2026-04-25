#include <stdio.h>
#include <stddef.h>

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	if (dst_len == size)
		return (size + src_len);
	while (src[i] != '\0' && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

int main(void)
{
	char	dst[20];
	size_t	ret;

	// size=0: 戻り値=srclen(dstは触らない)
	strlcpy(dst, "Hello", sizeof(dst));
	ret = strlcat(dst, " World", 0);
	printf("test1: dst=\"%s\" ret=%zu (expect: dst=\"Hello\" ret=6)\n", dst, ret);

	// size=1: dstが"\0"のみ扱い、何も追記されない、戻り値=strlen(dst)+strlen(src)=0+5
	dst[0] = '\0';
	ret = strlcat(dst, "Hello", 1);
	printf("test2: dst=\"%s\" ret=%zu (expect: dst=\"\" ret=5)\n", dst, ret);

	// size=dstlen: 追記不可、戻り値=size+srclen
	strlcpy(dst, "Hello", sizeof(dst));
	ret = strlcat(dst, " World", 5);
	printf("test3: dst=\"%s\" ret=%zu (expect: dst=\"Hello\" ret=11)\n", dst, ret);

	// size=dstlen+1: NULしか入らない、1文字も追記されない
	strlcpy(dst, "Hello", sizeof(dst));
	ret = strlcat(dst, " World", 6);
	printf("test4: dst=\"%s\" ret=%zu (expect: dst=\"Hello\" ret=11)\n", dst, ret);

	// size=dstlen+2: 1文字だけ追記
	strlcpy(dst, "Hello", sizeof(dst));
	ret = strlcat(dst, " World", 7);
	printf("test5: dst=\"%s\" ret=%zu (expect: dst=\"Hello \" ret=11)\n", dst, ret);

	// 通常: 全部入る
	strlcpy(dst, "Hello", sizeof(dst));
	ret = strlcat(dst, " World", sizeof(dst));
	printf("test6: dst=\"%s\" ret=%zu (expect: dst=\"Hello World\" ret=11)\n", dst, ret);

	return (0);
}
