/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:36:19 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/13 20:34:17 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				limit;
	int					result;
	const unsigned char	*src1;
	const unsigned char	*src2;

	result = 0;
	limit = 0;
	src1 = (const unsigned char *)s1;
	src2 = (const unsigned char *)s2;
	while (limit < n)
	{
		if (*src1 == *src2)
		{
			src1++;
			src2++;
			limit++;
		}
		else
		{
			result = *src1 - *src2;
			return (result);
		}
	}
	return (0);
}
/*
int	main()
{
	printf("%d", ft_memcmp("H\0ello", "H\0ola", 5));
}*/
