/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:55:41 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 14:39:34 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Cuenta el número de nodos de una lista.
*/
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst->next)
		i ++;
	return (i);
}
