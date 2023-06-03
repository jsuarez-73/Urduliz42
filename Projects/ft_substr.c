/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:14:50 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/23 20:14:50 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	counter;

	substring = (char *)malloc(len);
	counter = 0;
	if (substring != 0)
	{
		while (len--)
		{
			*(substring + counter) = *(s + start + counter);
			counter++;
		}
		*(substring + counter) = '\0';
		return (substring);
	}
	return ((void *)0);
}
