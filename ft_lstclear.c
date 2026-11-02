/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 00:02:19 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/12 23:08:05 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
/*
void	del(void *del)
{
	free(del);
}

int	main()
{
	t_list *head = ft_lstnew(ft_strdup("1"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("3")));

	printf("%d\n", ft_lstsize(head));

	ft_lstclear(&head->next, del);

	printf("%d\n", ft_lstsize(head));
}*/
