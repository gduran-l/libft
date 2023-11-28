/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:09:41 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/28 13:15:44 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	strlcat() appends string src to the end of dst.  It will append at most
	dstsize - strlen(dst) -	1 characters.  It will then NUL-terminate, unless
	dstsize is 0 or the original dst string was longer than dstsize (in
	practice this should not happen as it means that either dstsize is
	incorrect or that dst is not a proper string).
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l;
	size_t	i;

	i = 0;
	l = ft_strlen(dst);
	while (*src && i < dstsize)
	{
		dst[l + i] = src[i];
		i ++;
	}
	dst[l + i] = '\0';
	return (l + i);
}
