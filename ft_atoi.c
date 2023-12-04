/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:34:17 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/04 14:47:23 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int static	gofish(int c)
{
	if (c == 43 || c == 45 || (c >= 9 && c <= 13) || c == 32 || ft_isdigit(c))
		return (0);
	return (1);
}

/*
	The atoi() function converts the initial portion of the string pointed to
	by str to int representation.

	It is equivalent to:
		(int)strtol(str, (char **)NULL, 10);
*/
int	ft_atoi(const char *str)
{
	int			n;
	int			neg;
	size_t		i;

	n = 0;
	i = 0;
	neg = 1;
	while (str[i] != '\0')
	{
		if (((str[i] == 43 || str[i] == 45) && !ft_isdigit(str[i + 1])))
			return (0);
		if (gofish(str[i]) || (n && !ft_isdigit(str[i])) || (!n && str[i] == 48
				&& !ft_isdigit(str[i + 1])))
			return (n * neg);
		if (str[i] == 45)
			neg = -1;
		if (ft_isdigit(str[i]))
		{
			n *= 10;
			n += str[i] - 48;
		}
		i ++;
	}
	return (n * neg);
}
