#include<unistd.h>
#include<stdio.h>
int		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		n;
	int		i;

	i = 0;
	n = 0;
	while (*(src + i))
		i++;

	if (size == 0)
		return (i);	

	while(*src != '\0' && n < size - 1)
	{
		*dst++ = *src++;
		n++;
	}
	if (size > 0)
		*dst = '\0';

	return (i);
}
int main()
{
	char dest[10];
	char *src="saaddet naber ndkf";
	ft_strlcpy(dest,src,sizeof(dest));
	printf("%s",dest);
}
