#include<unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	int	j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = n;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	unsigned char *temp;
	while (n--)
	{
		*(temp + i) = *s;
		i++;
		s++;
	}
	while (j--)
	{
		*d = *temp;
		d++;
		temp++;
	}
	return (dest);
}
#include<stdio.h>
int main()
{
	char ptrsrc[128] = "saadet yuksel atabay zyenep";

	char *ptrdest = ptrsrc + 13;
	ft_memmove(ptrdest,ptrsrc,24);
	printf("%s",ptrdest);

}
