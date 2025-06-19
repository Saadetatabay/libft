/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:02:02 by satabay           #+#    #+#             */
/*   Updated: 2025/06/19 17:25:22 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	int		len_s1;
	int		len_s2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	cat = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!cat)
		return (0);
	while (*(s1 + i))
	{
		*(cat + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j))
	{
		*(cat + i + j) = *(s2 + j);
		j++;
	}
	*(cat + i + j) = '\0';
	return (cat);
}
#include<stdio.h>
int main()
{
	char *s1="merhaba";
	char *s2=" s";
	printf("%s",ft_strjoin(s1,s2));
}
