/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:53:20 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 09:54:33 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo.
	Crea una lista resultante de la aplicación correcta y sucesiva de la función
	’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el contenido
	de un nodo, si hace falta.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
}
