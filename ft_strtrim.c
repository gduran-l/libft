/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:46:41 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/01 15:13:15 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		add;
	size_t	c;
	size_t	i;
	size_t	j;
	char	*output;

	output = (char *)malloc(ft_strlen(s1) * sizeof(char));
	i = 0;
	c = 0;
	while (s1[i])
	{
		j = 0;
		add = 1;
		while (set[j])
		{
			if (s1[i] == set[j])
				add = 0;
			j ++;
		}
		if (add)
			output[c ++] = s1[i];
		i ++;
	}
	return (output);
}
