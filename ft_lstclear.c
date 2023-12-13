/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:45:41 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/13 12:41:44 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo,
	utilizando la función ’del’ y free(3).
	Al final, el puntero a la lista debe ser NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	ft_lstclear(&tmp->next, del);
	ft_lstdelone(tmp, del);
}
