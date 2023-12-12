/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:47:19 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/11 15:49:07 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_c(const char *s, char c)
{
	char	last;
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	last = c;
	while (s[i])
	{
		if (s[i] != c && last == c)
			count ++;
		last = s[i];
		i ++;
	}
	return (count);
}

static size_t	locate_next(const char *str, size_t start, char c)
{
	char	last;

	last = c;
	while (str[start])
	{
		if (str[start] == c && last != c)
			return (start);
		last = str[start];
		start ++;
	}
	return (start);
}

/*
	Reserva (utilizando malloc(3)) un array de strings resultante de separar
	la string ’s’ en substrings utilizando el caracter ’c’ como delimitador.
	El array debe terminar con un puntero NULL.
*/
char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	l;
	size_t	last;
	size_t	next;
	char	**output;

	j = 0;
	last = 0;
	next = 0;
	l = count_c(s, c);
	output = (char **)malloc((l + 2) * sizeof(char *));
	if (!output)
		return (0);
	while (j < l)
	{
		next = locate_next(s, last, c);
		if (next != last)
			output[j] = ft_substr(s, (unsigned int)last, next - last);
		last = next + 1;
	}
	output[j] = ft_substr(s, (unsigned int)last, ft_strlen(s) - last);
	output[j + 1][0] = '\0';
	return (output);
}
