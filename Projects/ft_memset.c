/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:15:03 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/04 21:15:03 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified*/
void	*ft_memset(void *s, int c, size_t n)
{	
	while (n--)
	{
		*((char *)s + n) = (unsigned char)c;
	}
	return (s);
}
