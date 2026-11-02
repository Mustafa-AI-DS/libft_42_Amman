/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 00:01:11 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/12 22:52:52 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *del)
{
	free(del);
}

int	main()
{
	t_list *node = ft_lstnew(ft_strdup("hello"));
	printf("%s", (char *)node->content);
	ft_lstdelone(node, del);
}*/
