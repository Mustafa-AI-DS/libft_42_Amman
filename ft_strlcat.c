/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:41:56 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/07 17:45:16 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	i;
	size_t	src_len;

	dest_len = 0;
	i = 0;
	src_len = ft_strlen(src);
	while (dest_len < size && dst[dest_len] != '\0')
	{
		dest_len++;
	}
	if (dest_len == size)
	{
		return (size + src_len);
	}
	while (i < size - dest_len - 1 && src[i] != '\0')
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main()
{
	char	dst[10] = "Hi";
	size_t	result;

	result = ft_strlcat(dst, "World", 10);

	printf("%s\n", dst);
	printf("%zu\n", result);
}*/
