/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:45:06 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 14:57:54 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Añade el nodo ’new’ al principio de la lista ’lst’.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = &(*lst[0]);
}
