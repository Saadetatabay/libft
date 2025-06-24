#include "libft.h"

char*	ft_strdup(const char *s)
{
	int		i;
	size_t	len;
	char	*copy;

	len = ft_strlen(s);
	copy = malloc(sizeof(char)*(len + 1));
	if (!copy)
		return (0);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);	
}