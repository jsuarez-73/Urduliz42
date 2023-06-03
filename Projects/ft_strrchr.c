/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:57:27 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/15 17:57:27 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*l_found;
	size_t	counter;

	counter = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			l_found = (char *)s;
		}
		counter++;
		s++;
	}

	if (l_found != (void *)0)
	{
		return (l_found);
	}
	return ((void *)0);
}
