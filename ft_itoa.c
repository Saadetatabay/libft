/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:21:22 by satabay           #+#    #+#             */
/*   Updated: 2025/06/18 12:23:17 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char	*ft_itoa(int n)
{
	int			j;
	long int	num;
	long int	nbr;
	char		*p;

	j = 0;
	num = (long int)n;
	nbr = (long int)n;
	if (num < 0)
	{
		nbr = nbr * -1;
		num = num * -1;
		j++;
	}
	while (num > 0)
	{
		num = num / 10;
		j++;
	}
	p = (char *)malloc(sizeof(char) * (j + 1));
	if (!p)
		return (0);
	j--;
	if (n < 0)
		p[0] = '-';
	while (nbr > 0)
	{
		p[j--] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (p);
}

int main()
{
	int num = +1;
	printf("%s\n",ft_itoa(num));
}
