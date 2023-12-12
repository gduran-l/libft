/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:47:19 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 12:14:36 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_end(const char *str, size_t start, char c)
{
	while (str[start])
	{
		if (str[start] == c)
			return (start);
		start ++;
	}
	return (start);
}

static size_t	ft_start(const char *str, size_t start, char c)
{
	while (str[start])
	{
		if (str[start] != c)
			return (start);
		start ++;
	}
	return (start);
}

static size_t	ft_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = ft_start(s, 0, c);
	while (s[i])
	{
		i = ft_start(s, ft_end(s, i, c), c);
		count ++;
	}
	return (count);
}

/*
	Reserva (utilizando malloc(3)) un array de strings resultante de separar
	la string ’s’ en substrings utilizando el caracter ’c’ como delimitador.
	El array debe terminar con un puntero NULL.
*/
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*temp;
	char	**output;

	j = 0;
	output = (char **)malloc((ft_words(s, c) + 1) * sizeof(char *));
	if (!output)
		return (0);
	i = ft_start(s, 0, c);
	while (s[i])
	{
		temp = ft_substr(s, (unsigned int)i, ft_end(s, i, c) - i);
		output[j] = ft_calloc(ft_strlen(temp) + 1, sizeof(char));
		ft_memmove(output[j], temp, ft_strlen(temp));
		free(temp);
		j ++;
		i = ft_start(s, ft_end(s, i, c), c);
	}
	output[j] = 0;
	return (output);
}
