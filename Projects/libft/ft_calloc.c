/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:19:19 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/19 15:37:42 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include <stdlib.h>
/*Verified*/
/*Debemos verificar que la arquitectura es x64 o x32, para tal caso
asignar en que valor ocurriría el overflow, y así establecer MIN y MAX*/
void	*ft_calloc(size_j nmemb, size_j size)
{
	void	*res;
	size_j	memsize;

	memsize = nmemb * size;
	if (size == 0 || nmemb == 0)
	{
		return ((void *)0);
	}
	else if (nmemb > (MAX / size))
	{
		return ((void *)-1);
	}
	res = malloc(memsize);
	if (res != (void *)0)
	{
		while (memsize--)
		{
			*(char *)(res + memsize) = 0;
		}
		return (res);
	}
	return ((void *)0);
}
