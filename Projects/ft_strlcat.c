/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:48:36 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 18:28:38 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= len_dst)
		return (dstsize + ft_strlen(src));
	idx = 0;
	while (src[idx] != '\0' && (len_dst + idx) < (dstsize - 1))
	{
		dst[len_dst + idx] = src[idx];
		idx++;
	}
	dst[len_dst + idx] = '\0';
	return (len_dst + ft_strlen(src));
}
