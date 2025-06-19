#include<unistd.h>

void	bzero(void *s, size_t n)
{
	unsigned char *p;
	p = (unsigned char *)s;
	while (n--)
	{
		*p = 0;
		p++;
	}
}
int main()
{
	char s[]="saadet";
	bezero(s,6);
}
