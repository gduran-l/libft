/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:34:21 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/28 10:45:47 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while ((char)s || n)
	{
		if ((char)s == (char)c)
			return ((void *)s);
		n --;
		s ++;
	}
	return (0);
}
