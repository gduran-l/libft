/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:11:06 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/30 15:17:45 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The memcpy() function copies n bytes from memory area src to memory area dst.
	If dst and src overlap, behavior is undefined.  Applications in which dst and
	src might overlap should use memmove(3) instead.

	The memcpy() function returns the original value of dst.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void			*out;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	out = dst;
	while (n)
	{
		*d ++ = *s ++;
		n --;
	}
	return (out);
}
