/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:23:49 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/15 20:23:49 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"types.h"

int	ft_memcmp(const void *s1, const void *s2, size_j n)
{
	size_j	counter;

	counter = 0;
	while (counter < n)
	{
		if (*(unsigned char *) s1 != *(unsigned char *) s2)
		{
			if (*(unsigned char *) s1 - *(unsigned char *) s2 > 0)
			{
				return (counter);
			}
			return (-counter);
		}
		counter++;
		s1++;
		s2++;
	}
	return (0);
}
