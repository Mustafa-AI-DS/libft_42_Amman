/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabughar <mabughar@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:32:00 by mabughar          #+#    #+#             */
/*   Updated: 2026/10/07 16:11:11 by mabughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int str)
{
	if (str > 90 || str < 65)
	{
		if ((str > 122 || str < 97) && (str < 48 || str > 57))
			return (0);
	}
	return (1);
}
/*
int	main()
{
	printf("%d", ft_isalnum('7'));
}*/
