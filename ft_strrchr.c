/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:07:59 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/04 12:34:37 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

/*
	The strchr() function locates the first occurrence of c (converted to a
	char) in the string pointed to by s.  The terminating null character is
	considered to be part of the string; therefore if c is `\0', the functions
	locate the terminating `\0'.

	The strrchr() function is identical to strchr(), except it locates the last
	occurrence of c.

	The functions strchr() and strrchr() return a pointer to the located
	character, or NULL if the character does not appear in the string.
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	l;

	l = ft_strlen(s);
	if (!c)
		return ((char *)&s[l]);
	while (l --)
	{
		if (s[l] == c)
			return ((char *)&s[l]);
	}
	return (0);
}
/*
int	main(void)
{

	printf("teste, NULL: %s\n", ft_strrchr("teste", '\0'));
	printf("teste, e: %s\n", ft_strrchr("teste", 'e'));
	printf("xteste, x: %s\n", ft_strrchr("xteste", 'x'));
	printf("teste, x: %s\n", ft_strrchr("teste", 'x'));
	printf("teste, t: %s\n", ft_strrchr("teste", 't'));

	return (0);
}
*/
