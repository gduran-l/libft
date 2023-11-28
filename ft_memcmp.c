/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:51:08 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/28 12:55:32 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while ((char *)s1 || n)
	{
		if ((char *)s1 != (char *)s2)
			return ((char *)s1 - (char *)s2);
		s1 ++;
		s2 ++;
		n --;
	}
	return ((char *)s1 - (char *)s2);
}
