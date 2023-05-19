/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:48:36 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/14 12:48:36 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"types.h"

size_j	ft_strlcat(char *dest, const char *src, size_j n)
{
	size_j	counter;
	size_j	size_free;
	size_j	size_dest;

	counter = 0;
	size_dest = ft_strlen(dest);
	size_free = n - size_dest;
	dest += size_dest;
	while (counter < size_free)
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	return (counter);
}
