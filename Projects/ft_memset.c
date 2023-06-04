/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:15:03 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 18:27:53 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	idx;

	idx = 0;
	while (idx < len)
	{
		((unsigned char *)b)[idx] = c;
		idx++;
	}
	return (b);
}
