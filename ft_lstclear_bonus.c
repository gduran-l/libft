/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:45:41 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 15:03:32 by mduran-l         ###   ########.fr       */
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
	if (lst[0]->next != NULL)
		ft_lstclear(&(lst[0]->next), del);
	(*del)(&(lst[0]->content));
	free(lst);
}
