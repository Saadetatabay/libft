#include<unistd.h>
char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    size_t  j;
    i = 0;
    while(i < n)
    {
        j = 0;
        while (s2[j] && s1[i + j] == s2[j] && i + j < n)
        {   
            j++;
        }
        if(!s2[j])
            return(char *)(s1 + i);
        i++;
    }
    return (0);
}