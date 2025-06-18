#include<unistd.h>
size_t strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		n;
	size_t	i;

	i = 0;
	n = 0;
	while (*(src + i))
		i++;

	if (dstsize == 0)
		return (i);	

	while(*src != '\0' && n < dstsize - 1)
	{
		*dst++ = *src++;
		n++;
	}
	if (dstsize > 0)
		*dst = '\0';

	return (i);
}