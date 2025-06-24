/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:44:22 by satabay           #+#    #+#             */
/*   Updated: 2025/06/24 13:06:45 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = lst;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
/*#include<stdio.h>
int	main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;

	n1 = ft_lstnew("atabay");
	n2 = ft_lstnew("yuksel");
	n3 = ft_lstnew("saadet");
	ft_lstadd_front(&n1,n2);
	ft_lstadd_front(&n2,n3);
	printf("%d",ft_lstsize(n3));
}*/