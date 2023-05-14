/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 20:59:38 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/12 20:59:38 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
//don't overlap dest with src.
//doesn't have the size of the dest- pointer, Therefore could have
//uncertain behaviours as malloc: corrupted top size() in case the
//size of dest be less than the size of n.
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_j n)
{
	size_j	counter;

	counter = 0;
	while (*(char *) src != '\0' && counter < n)
	{
		*(char *) dest = *(char *) src;
		counter++;
		dest++;
		src++;
	}
	return (dest - counter);
}
