/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:21:22 by satabay           #+#    #+#             */
/*   Updated: 2025/06/19 16:48:05 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long int num)
{
	int	j;

	j = 0;
	while (num > 0)
	{
		num = num / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	int			j;
	long int	num;
	char		*p;

	num = (long int)n;
	j = 0;
	if (num < 0)
	{
		num = num * -1;
		j++;
	}
	j += count_digit(num);
	p = (char *)malloc(sizeof(char) * (j + 1));
	if (!p)
		return (0);
	j--;
	if (n < 0)
		p[0] = '-';
	while (num > 0)
	{
		p[j--] = num % 10 + '0';
		num = num / 10;
	}
	return (p);
}
