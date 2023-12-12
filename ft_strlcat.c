/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:09:41 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 14:17:05 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	strlcat() appends string src to the end of dst.  It will append at most
	dstsize - strlen(dst) -	1 characters.  It will then NUL-terminate, unless
	dstsize is 0 or the original dst string was longer than dstsize (in
	practice this should not happen as it means that either dstsize is
	incorrect or that dst is not a proper string).

	strlcat() function returns the total length of the string they tried to cre-
	ate, that means the initial length of dst plus the length of src.
	
	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	if (!dstsize)
		return (ls);
	i = 0;
	while (src[i] && i < dstsize - ld)
	{
		dst[ld + i] = src[i];
		i ++;
		dst[ld + i] = '\0';
	}
	dst[ld + dstsize - 1] = '\0';
	return (ld + ls);
}
