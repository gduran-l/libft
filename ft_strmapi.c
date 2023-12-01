/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:48:29 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/01 16:28:56 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	A cada carácter de la string ’s’, aplica la función ’f’ dando como paráme-
	tros el índice de cada carácter dentro de ’s’ y el propio carácter.
	Genera 	una nueva string con el resultado del uso sucesivo de ’f’
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*output;
	char			*temp;
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		temp = (*f)(i, s[i]);
		l += ft_strlen(temp);
		i ++;
	}
	output = (char *)malloc((l + i) * sizeof(char));
	i = 0;
	while (s[i])
	{
		temp = (*f)(i, s[i]);
		ft_strlcat(output, temp, ft_strlen(temp));
		i ++;
	}
	return (output);
}
