/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:51:08 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/30 15:39:20 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The memcmp() function compares byte string s1 against byte string s2.
	Both strings are assumed to be n bytes long.

	The memcmp() function returns zero if the two strings are identical, other-
	wise returns the difference between the first two differing bytes (treated
	as unsigned char values, so that `\200' is greater than `\0', for example).
	Zero-length strings are always identical. This behavior is not required by
	C and portable code should only depend on the sign of the returned value.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (n --)
	{
		if (*a ++ != *b ++)
			return (*a - *b);
	}
	return (0);
}
