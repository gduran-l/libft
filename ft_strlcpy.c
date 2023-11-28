/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:55:47 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/28 12:24:11 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	size;

	size = 0;
	while (*src || dstsize)
	{
		*dst = *src;
		dstsize --;
		size ++;
		src ++;
		dst ++;
	}
	*dst = '\0';
	return (size);
}
