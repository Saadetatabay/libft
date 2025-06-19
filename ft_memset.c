#include<unistd.h>
#include<stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	p = (unsigned char*)s;
	while (n--)
	{
		*p = c;
		p++;
	}
	return (s);

}
int  main()
{
	int a[] = {1, 2, 3};
	ft_memset(a ,255,4);
	ft_memset(a,227,2);
	ft_memset(a,224,1);
	printf("%d %d %d",a[0],a[1],a[2]);
}

