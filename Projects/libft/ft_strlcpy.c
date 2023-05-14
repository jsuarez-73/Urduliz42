/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:24:54 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/13 21:24:54 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
/*The programmer must be aware that dest memory area
should be more than n bytes intended to copy*/
size_j	ft_strlcpy(char *dest, const char *src, size_j n)
{
	size_j	counter;

	counter = 0;
	while (counter < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (counter);
}
