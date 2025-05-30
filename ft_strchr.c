#include<unistd.h>
char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (c == *s)
            return ((char *)s);
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (0);            
}