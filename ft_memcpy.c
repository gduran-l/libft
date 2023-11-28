/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:11:06 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/28 12:27:27 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (n)
	{
		dst = (void *)src;
		src ++;
		dst ++;
		n --;
	}
	return (dst);
}
