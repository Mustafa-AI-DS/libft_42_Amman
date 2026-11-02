/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:43:06 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/17 18:37:52 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	limit;
	int		result;

	result = 0;
	limit = 0;
	while (limit < n && (*s1 != '\0' || *s2 != '\0'))
	{
		if ((unsigned char)*s1 == (unsigned char)*s2)
		{
			s1++;
			s2++;
			limit++;
		}
		else
		{
			result = (unsigned char)*s1 - (unsigned char)*s2;
			return (result);
		}
	}
	return (0);
}
/*
int	main()
{
	printf("%d", ft_strncmp("Hello", "Hola", 4));
}*/
