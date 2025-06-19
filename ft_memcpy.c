#include<unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char* d;
	unsigned char* s;
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
#include<stdio.h>
int main()
{
	char src[128]="caro emarld back it up";

	char *dest= src+13;

	ft_memcpy(dest,src,24);
	printf("%s",dest);
}
