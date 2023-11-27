/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:16:12 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/27 14:32:31 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
		n ++;
	}
	return (0);
}
