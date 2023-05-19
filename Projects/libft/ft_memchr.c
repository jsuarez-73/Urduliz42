/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:04:40 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/15 20:04:40 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifying left, put on eye in (unsigned char) c*/

#include	"types.h"

void	*ft_memchr(const void *s, int c, size_j n)
{
	size_j	counter;
	void	*ptr_null;

	counter = 0;
	while (counter < n)
	{
		if (*(unsigned char *) s == (unsigned char) c)
		{
			return (s);
		}
	}
	return (ptr_null);
}
