/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:43:45 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/13 20:21:58 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*j;

	i = 0;
	j = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			j = (char *)&s[i];
		}
		i++;
	}
	if (j != NULL)
		return (j);
	else if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main()
{
	printf("%s", ft_strrchr("Hello", 'q'));
}*/
