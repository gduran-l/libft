/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:47:56 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/01 16:52:58 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	len;

	len = 0;
	while (n)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

/*
	Utilizando malloc(3), genera una string que represente el valor entero
	recibido como argumento. Los números negativos tienen que gestionarse.
*/
char	*ft_itoa(int n)
{
	size_t			l;
	unsigned int	nbr;
	char			*output;

	l = ft_nbrlen(n);
	output = (char *)malloc((l + 1) * sizeof(char));
	nbr = n;
	output[0] = '-';
	if (n < 0)
		nbr = -n;
	else
		l --;
	output[l + 1] = '\0';
	while (nbr)
	{
		output[l--] = 48 + nbr % 10;
		nbr /= 10;
	}
	return (output);
}
