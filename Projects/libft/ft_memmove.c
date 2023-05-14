/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:51:37 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/13 11:51:37 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
/*Not necessary prototype for this function!*/

/*Copy n-bytes from memory area src to dest, there is
a temporary array that doesn't overlap dest or src to serves
as built between src to dest.
it's necessary to check the tmp array because it's not enough
to solve the problem because of the Norma constraints and the
inefficient lack of memory.
*/
void	*ft_memmove(void *dest, const void *src, size_j n)
{
	size_j	counter;
	char	tmp[100000];
	size_j	dest_len;

	dest_len = ft_strlen((char *) dest);
	ft_getsrc(src, tmp, n);
	ft_setdest(tmp, dest, dest_len);
	return (dest);
}

static void	*ft_getsrc(const void *src, void *tmp, size_j n)
{
	size_j	counter;

	counter = 0;
	while (*(char *) src != '\0' && counter < n)
	{
		*(char *) tmp = *(char *) src;
		tmp++;
		src++;
		counter++;
	}
	return (tmp - counter);
}

static void	*ft_setdest(const void *tmp, void *dest, size_j n)
{
	size_j	counter;

	counter = 0;
	while (*(char *) tmp != '\0' && counter < n)
	{
		*(char *) dest = *(char *) tmp;
		dest++;
		tmp++;
		counter++;
	}
	return (dest - counter);
}
