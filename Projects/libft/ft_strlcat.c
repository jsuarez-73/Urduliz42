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

	counter = ft_strlen(dest);
	while (counter < n)
	{
		*(dest + counter) = *src;
		src++;
		counter++;
	}
	*(dest + counter) = '\0';
	return (counter);
}
