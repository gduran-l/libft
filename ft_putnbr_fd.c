/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:52:36 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/01 14:39:50 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	l;
	unsigned int	i;
	int				t;
	char			nbr[11];

	l = 0;
	i = 0;
	t = n;
	while (t)
	{
		t /= 10;
		l ++;
	}
	while (i < l)
	{
		nbr[l - i] = (n % 10) + 48;
		n /= 10;
		i ++;
	}
	write(fd, nbr, l);
}
