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

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_j n)
{
	while (n--)
	{
		*(char *)(dest + n) = *(char *)(src + n);
	}
	return (dest);
}
