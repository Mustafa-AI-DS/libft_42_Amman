/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 00:03:17 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/12 23:14:26 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	print(void *value)
{
	printf("%s\n", (char *)value);
}

int	main()
{
	t_list *head = ft_lstnew("1");
	ft_lstadd_back(&head, ft_lstnew("2"));
	ft_lstadd_back(&head, ft_lstnew("3"));

	ft_lstiter(head, print);
}*/
