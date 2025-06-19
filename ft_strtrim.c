#include<unistd.h>	
#include<stdlib.h>

static int length(char const *s)
{
	int	i;
	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	control;
	int	len;
	char	*ret;
	if (!s1)
		return (0);
	while (*s1)
	{
		control = 0;
		i = 0;
		while(*(set + i))
		{
			if(*(set + i) == *s1)
			{
				control = 1;
				break;
			}
			i++;
		}
		if (!control)
			break;
		s1++;
	}
	len = length(s1);
	while(len)
	{
		control = 0;
		i = 0;
		while (*(set + i))
		{	
			if(*(set + i) == *(s1 + len - 1))
			{
				control = 1;
				break;
			}
			i++;
		}
		if(!control)
			break;
		len--;
	}
	i = 0;
	ret = (char *)malloc(sizeof(char ) * (len + 1));
	if (!ret)
		return (0);
	while (i < len)
	{
		ret[i] = s1[i];
	       i++;	
	}
	ret[i] = '\0';
	return (ret);
}
#include<stdio.h>
int main()
{
	char *s1="çççmerhabaçç";
	char *set="ç";
	printf("%s",ft_strtrim(s1,set));
}
