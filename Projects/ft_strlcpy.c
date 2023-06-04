/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:24:54 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 17:46:14 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;

	if (dstsize == 0)
		return (ft_strlen(src));
	idx = 0;
	while (src[idx] && idx < (dstsize - 1))
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (ft_strlen(src));
}
