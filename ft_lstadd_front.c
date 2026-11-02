/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 23:56:34 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/11 21:13:01 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list *head = ft_lstnew("1");
	t_list *new = ft_lstnew("2");

	ft_lstadd_front(&head, new);

	printf("%s\n", (char *)head->content);
	printf("%s\n" , (char *)head->next->content);
}*/
