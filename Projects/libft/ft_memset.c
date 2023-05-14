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

#include "types.h"

void	*ft_memset(void *s, int c, size_j n)
{
	size_j	counter;

	counter = 0;
	while (counter < n)
	{
		*(int *) s = c;
		s++;
		counter++;
	}
	return (s - counter);
}
