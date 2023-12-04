/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:34:17 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/04 09:58:30 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	i;
	int	is_neg;

	is_neg = 1;
	n = 0;
	i = 0;
	while (str[i])
	{
		if (n && !ft_isdigit(str[i]))
			return (n * is_neg);
		if (str[i] == 45)
			is_neg = -1;
		if (ft_isdigit(str[i]))
		{
			n *= 10;
			n += str[i] - 48;
		}
		else if (n > 0)
			return (n * is_neg);
		i ++;
	}
	return (n * is_neg);
}
