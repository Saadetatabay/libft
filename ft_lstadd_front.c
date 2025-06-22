/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:20:48 by satabay           #+#    #+#             */
/*   Updated: 2025/06/20 16:40:51 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/*#include<stdio.h>
int main()
{
	t_list *lst;
	lst = ft_lstnew("atabay");

	t_list *lst1;

	lst1 = ft_lstnew("saadet");
	
	ft_lstadd_front(&lst,lst1);
	printf("%s %s",(char *)lst->content,(char *)lst->next->content);
}*/
