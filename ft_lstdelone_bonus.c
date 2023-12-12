/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:47:34 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 14:59:42 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Toma como parámetro un nodo ’lst’ y libera la memoria del contenido utili-
	zando la función ’del’ dada como parámetro, además de liberar el nodo.
	La memoria de ’next’ no debe liberarse.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst->content);
}
