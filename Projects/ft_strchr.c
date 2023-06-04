/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:50:23 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 18:14:46 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == (unsigned char)c)
			return ((char *)(s + idx));
		idx++;
	}
	if (s[idx] == (unsigned char)c)
		return ((char *)(s + idx));
	return (NULL);
}
