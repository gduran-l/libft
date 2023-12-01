/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:47:19 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/01 17:01:03 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Reserva (utilizando malloc(3)) un array de strings resultante de separar
	la string ’s’ en substrings utilizando el caracter ’c’ como delimitador.
	El array debe terminar con un puntero NULL.
*/
char	**ft_split(char const *s, char c)
{
	size_t	k;
	size_t	i;
	size_t	j;
	char	**output;

	k = 0;
	i = 0;
	j = 0;
	output = (char **)malloc((ft_strlen(s) + 1) * sizeof(char));
	while (s[i])
	{
		if (s[i] == c)
		{
			output[j][k ++] = '\0';
			j ++;
			continue ;
		}
		output[j][k ++] = s[i];
		i ++;
	}
	output[j + 1] = 0;
	return (output);
}
