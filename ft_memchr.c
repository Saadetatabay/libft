#include<unistd.h>
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    const unsigned char   *p;
    i = 0;
    p = s;
    while (i < n)
    {
        if (p[i] == (unsigned char)c)
            return (void *)(p + i);
        i++;
    }
    return (0);
}