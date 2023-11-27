/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:07:59 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/27 14:13:32 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ftlib.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	while (s[l])
	{
		if (s[l] == c)
			return (&s[l]);
		l --;
	}
	return (0);
}
