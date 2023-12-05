/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:45:07 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/05 14:38:30 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
	La substring empieza desde el índice ’start’ y tiene una longitud máxima
	’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*output;

	i = 0;
	l = ft_strlen(s);
	if (len > l)
		len = l;
	output = (char *)malloc((len + 1) * sizeof(char));
	if (!output)
		return (0);
	ft_bzero(output, len + 1);
	if (start > l)
		return (output);
	while (s[start + (unsigned int)i] && i < len)
	{
		output[i] = s[start + (unsigned int)i];
		i ++;
	}
	return (output);
}
