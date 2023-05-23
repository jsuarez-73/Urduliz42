/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:51:26 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/19 21:51:26 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_j	s_len;

	s_len = ft_strlen(s);
	dup = (char *)malloc(s_len);
	if (dup == (char *)0)
	{
		return (dup);
	}
	dup = (char *)ft_memcpy(dup, s, s_len);
	return (dup);
}
