/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:10:36 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/28 14:49:33 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The memmove() function copies len bytes from string src to string dst.
	The two strings may overlap; the copy is always done in a non-destructive
	manner.

	The memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*out;

	out = dst;
	while (len --)
		((char *)dst)[len] = ((char *)src)[len];
	return (out);
}
