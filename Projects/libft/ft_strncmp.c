/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:53:07 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/15 19:53:07 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifying left*/
#include "types.h"

int	ft_strncmp(const char *s1, const char *s2, size_j n)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			if (*s1 - *s2 > 0)
			{
				return (1);
			}
			return (-1);
		}
		s1++;
		s2++;
	}
	return (0);
}
