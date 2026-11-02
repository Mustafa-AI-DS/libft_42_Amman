/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:39:39 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/17 18:59:39 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void	free_split(char **split, size_t i)
{
	while (i > 0)
	{
		i--;
		free(split[i]);
	}
	free(split);
}

static char	*get_word(char const **s, char c)
{
	char	*word;
	size_t	len;

	while (**s == c)
		(*s)++;
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = ft_substr(*s, 0, len);
	if (word != NULL)
		*s += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		split[i] = get_word(&s, c);
		if (split[i] == NULL)
		{
			free_split(split, i);
			return (NULL);
		}
		i++;
	}
	split[i] = NULL;
	return (split);
}
/*
int	main(void)
{
	char	**result;
	int		i;

	i = 0;
	result = ft_split(NULL, '-');
	if (result == NULL)
	{
		printf("ft_split returned NULL\n");
		return (0);
	}
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}*/
