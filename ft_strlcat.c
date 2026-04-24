unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i;

	dst_len = 0;
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	src_len = ft_strlen(src);
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


}

int main(void)
{

}
