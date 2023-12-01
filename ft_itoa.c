/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:47:56 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/01 16:11:45 by mduran-l         ###   ########.fr       */
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
	if (n < 0)
		len ++;
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
	nbr = (unsigned int)n;
	if (n < 0)
	{
		output[0] = '-';
		nbr = (unsigned int)-n;
	}
	output[l + 1] = '\0';
	while (l)
	{
		output[l] = 48 + (nbr % 10);
		nbr /= 10;
		l --;
	}
	return (output);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_itoa(-5234));
	printf("%s\n", ft_itoa(36234));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
