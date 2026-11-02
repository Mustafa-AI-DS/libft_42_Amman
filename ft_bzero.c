/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:22:51 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/10 15:39:39 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t num)
{
	size_t	i;
	char	*c;

	c = (char *)s;
	i = 0;
	while (i < num)
	{
		c[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Hello";

	ft_bzero(str, 2);
	printf("%d", str[0]);
	printf("%d", str[1]);
	return (0);
}*/
