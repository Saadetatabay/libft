#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;

	i = 0;
	while (*(s + i))
		i++;
	p = (char *)malloc(sizeof(char) * i);
	if (!p)
		return (0);
	i = 0;
	while (*(s + i))
	{
		*(p + i) = f(i, *(s + i));
		i++;
	}
	return (p);
}
