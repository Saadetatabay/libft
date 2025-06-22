/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 12:43:07 by satabay           #+#    #+#             */
/*   Updated: 2025/06/22 13:36:29 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	dst_len;
	size_t	src_len;

	n = 0;
	dst_len = 0;
	src_len = 0;
	while (*(dst + dst_len))
		dst_len++;
	while (*(src + src_len))
		src_len++;
	if (size <= dst_len)
		return (dst_len + src_len);
	while (src[n] != '\0' && n < size - dst_len - 1)
	{
		dst[dst_len + n] = src[n];
		n++;
	}
	dst[dst_len + n] = '\0';
	return (dst_len + src_len);
}
