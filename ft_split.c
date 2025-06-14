#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
static int    word_count(char const *s, char c)
{
    int    word_count;
    int i;
    i = 0;
    word_count = 0;
    if (*(s + i)!= c)
    {
        word_count++;
        i++;
    }
    while (*(s + i))
    {
        if (*(s + i) != c && *(s + i - 1) == c && *(s + i) != '\0')
            word_count++;
        i++;
    }
    return (word_count);
}
char    **ft_split(char const *s, char c)
{
    int    i;
    int    j;
    int k;
    int    len;
    char    **splitted;
    i = 0;
    j = 0;
    splitted = (char **)malloc(sizeof(char *) * (word_count(s,c) + 1));
    if(!splitted)
        return (0);
    while(*(s + i))
    {
        while (*(s + i) == c)
            i++;
        len = 0;
        while (*(s + i) != c && *(s + i) != '\0')
        {
            i++;
            len++;
        }
        splitted[j] = (char *)malloc(sizeof(char) * (len + 1));
        if (!splitted[j])
        {
          while(j)
          {
            free(splitted[j]);
            j--;
          }
          free(splitted);
        }  
        
        k = 0;
        while (len) //len 6 i 9
        {
            splitted[j][k] = s[i - len];
            k++;
            len--;
        }
        splitted[j][k] = '\0';
        j++;
    }
    return (splitted);
}