/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:48:32 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 15:04:17 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;

	while (lst->next)
	{
		next = lst->next;
		(*f)(lst);
		lst = next;
	}
}
