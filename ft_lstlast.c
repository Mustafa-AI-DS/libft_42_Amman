/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 23:59:09 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/11 21:29:10 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list *head = ft_lstnew("1");
	t_list *node1 = ft_lstnew("2");
	t_list *node2 = ft_lstnew("3");

	head->next = node1;
	node1->next = node2;

	t_list *last = ft_lstlast(head);

	printf("%s", (char *)last->content);
}*/
