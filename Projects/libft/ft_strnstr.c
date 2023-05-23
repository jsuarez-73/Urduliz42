/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:30:46 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/15 20:30:46 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

char	*ft_strnstr(const char *s1, const char *s2, size_j n)
{
	size_j	counter;

	counter = 1;
	if (*s2 == '\0')
		return ((char *)s1);
	while (n-- && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			while (n-- && *s2 != '\0' && *s1 != '\0')
			{
				if (*(s1 + counter) != *(s2 + counter))
				{
					break ;
				}
				counter++;
			}
			if (*(s2 + counter) == '\0')
				return ((char *)s1);
		}
		s1 += counter;
		counter = 1;
	}
	return ((void *)0);
}
