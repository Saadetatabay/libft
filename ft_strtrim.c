/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 17:17:58 by satabay           #+#    #+#             */
/*   Updated: 2025/06/24 17:18:11 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	length(char const *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		control;
	int		len;
	char	*ret;

	if (!s1)
		return (0);
	while (*s1)
	{
		control = 0;
		i = 0;
		while (*(set + i))
		{
			if (*(set + i) == *s1)
			{
				control = 1;
				break ;
			}
			i++;
		}
		if (!control)
			break ;
		s1++;
	}
	len = length(s1);
	while (len)
	{
		control = 0;
		i = 0;
		while (*(set + i))
		{
			if (*(set + i) == *(s1 + len - 1))
			{
				control = 1;
				break ;
			}
			i++;
		}
		if (!control)
			break ;
		len--;
	}
	i = 0;
	ret = (char *)malloc(sizeof(char) * (len + 1));
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
