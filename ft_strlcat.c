#include<unistd.h>
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t     n;
    size_t      dst_len;
    size_t      src_len;
    n = 0;
    dst_len = 0;
    src_len = 0;
    while (*dst)
    {
        dst++;
        dst_len++;
    }
    while (*(src + src_len))
        src_len++;
    if (dstsize <= dst_len)
        return (dst_len + src_len);
    while (*src != '\0' && n < dstsize - dst_len - 1)
    {
        *dst++ = *src++;
        n++;
    }
    *dst = '\0';
    return (dst_len + src_len);
}