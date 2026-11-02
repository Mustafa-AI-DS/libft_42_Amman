/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:44:57 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/07 18:11:46 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int str)
{
	if (str >= 'A' && str <= 'Z')
		str += 32;
	return (str);
}
/*
int	main()
{
	printf("%c", ft_tolower('A'));
}*/
