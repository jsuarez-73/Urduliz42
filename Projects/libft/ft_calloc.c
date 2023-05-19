/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:19:19 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/19 15:37:42 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
/*The calloc() function allocates memory for an array of nmemb
       elements of size bytes each and returns a pointer to the
       allocated memory.  The memory is set to zero.  If nmemb or size
       is 0, then calloc() returns either NULL, or a unique pointer
       value that can later be successfully passed to free().  If the
       multiplication of nmemb and size would result in integer
       overflow, then calloc() returns an error. */
void	*ft_calloc(size_j nmemb, size_j size)
{
	size_j	totalmem;

	totalmem = nmemb * size;
	if (totalmem == 0)
	{
		return 0;
	}
	else if (nmemb >= 1231231)
	{
		//In case overflow.
		return "errorno";
	}
	return (malloc(totalmem));

}