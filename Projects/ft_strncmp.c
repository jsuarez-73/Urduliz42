/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:53:07 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 17:51:51 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n > 0)
	{
		while (idx < n && (s1[idx] != '\0' || s2[idx] != '\0'))
		{
			if (s1[idx] != s2[idx])
				return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
			idx++;
		}
	}
	return (0);
}
