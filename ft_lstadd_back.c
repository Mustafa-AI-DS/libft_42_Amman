/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 00:00:10 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/11 21:48:26 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main(void)
{
	t_list *head = ft_lstnew("1");
	t_list *node1 = ft_lstnew("2");
	t_list *node2 = ft_lstnew("3");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);

	t_list *node = head;
	while(node != NULL)
	{
		printf("%s\n",(char *) node->content);
		node = node->next;
	}
}*/
