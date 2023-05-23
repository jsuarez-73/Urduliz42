/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:51:37 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/13 11:51:37 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	*ft_memmove(void *dest, const void *src, size_j n)
{	
	size_j	counter;

	counter = 0;
	if (dest > src)
	{
		while (n--)
		{
			*(char *)(dest + n) = *(char *)(src + n);
		}
	}
	else
	{
		while (n--)
		{
			*(char *)(dest + counter) = *(char *)(src + counter);
			counter++;
		}
	}
	return (dest);
}
