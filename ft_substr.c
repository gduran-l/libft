/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:45:07 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/01 14:52:21 by mduran-l         ###   ########.fr       */
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
	unsigned int	i;
	char			*output;

	i = 0;
	output = (char *)malloc(len + 1 * sizeof(char));
	while ((size_t)i < len)
	{
		output[i] = s[start + i];
		i ++;
	}
	output[i] = '\0';
	return (output);
}
