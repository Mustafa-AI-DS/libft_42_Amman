/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 23:57:43 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/11 21:20:31 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int	main(void)
{
	t_list *head = ft_lstnew("1");
	t_list *node1 = ft_lstnew("2");
	t_list *node2 = ft_lstnew("3");

	head->next = node1;
	node1->next = node2;

	printf("%d", ft_lstsize(head));	
}*/
