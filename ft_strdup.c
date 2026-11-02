/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:40:49 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/11 12:07:53 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_src;
	size_t	size;
	size_t	index;

	index = 0;
	size = ft_strlen(s);
	new_src = malloc((size + 1) * sizeof(char));
	if (new_src == NULL)
		return (NULL);
	while (s[index])
	{
		new_src[index] = s[index];
		index++;
	}
	new_src[index] = '\0';
	return (new_src);
}
/*
int	main()
{
	printf("%s", ft_strdup("Hello"));
}*/
