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

#include "libft.h"
/*Verified*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	memsize;

	memsize = nmemb * size;
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
