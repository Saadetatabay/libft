#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

char    *ft_itoa(int n);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char    **ft_split(char const *s, char c);
char    *ft_strchr(const char *s, int c);
void ft_striteri(char *s, void (*f)(unsigned int,char*));
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *s1, const char *s2, size_t n);
char    *ft_strrchr(const char *s, int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
#endif