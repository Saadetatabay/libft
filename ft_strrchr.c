#include<unistd.h>
char    *ft_strrchr(const char *s, int c)
{
    int     i;
    while(*(s + i))
        i++;
    while(i)
    {
        if(s[i] == (char)c)
            return((char *)s + i);
        i--;
    }
    return (0);
}