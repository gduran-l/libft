/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:54:40 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/13 10:02:04 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_bonus.h"

/*
	Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ se
	inicializa con el contenido del parámetro ’content’. La variable ’next’, con
	NULL.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list *));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
