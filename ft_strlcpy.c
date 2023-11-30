/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:55:47 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/30 14:56:41 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The strlcpy() function copy strings with the same input parameters and output
	result as snprintf(3).
	They are designed to be safer, more consistent, and less error prone repla-
	cements for the easily misused function strncpy(3).

	strlcpy() take the full size of the destination buffer and guarantee
	NUL-termination if there is room.  Note that room for the NUL should be
	included in dstsize.

	strlcpy() copies up to dstsize - 1 characters from the string src to dst,
	NUL-terminating the result if dstsize is not 0.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	size;

	size = 0;
	while (src[size] || dst[size] || size < dstsize - 1)
	{
		dst[size] = src[size];
		size ++;
	}
	dst[dstsize - 1] = 0;
	return (ft_strlen(src));
}
