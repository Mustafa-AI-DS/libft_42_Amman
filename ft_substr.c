/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:44:33 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/11 12:10:16 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		str_len;
	size_t		copy_len;
	char		*new_str;

	i = 0;
	str_len = ft_strlen(s);
	if (start >= str_len)
		copy_len = 0;
	else if (len > str_len - start)
		copy_len = str_len - start;
	else
		copy_len = len;
	new_str = malloc(copy_len + 1);
	if (new_str == NULL)
		return (NULL);
	while (i < copy_len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int main()
{
	char s[] = "Hello world";
	printf("%s", ft_substr(s, 6, 30));
}*/
