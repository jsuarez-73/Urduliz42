/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:30:46 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 18:13:51 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	idx;
	unsigned int	idx2;

	if (!*needle)
		return ((char *)haystack);
	idx = 0;
	while (haystack[idx] != '\0' && idx < len)
	{
		idx2 = 0;
		if (haystack[idx] == needle[idx2])
		{
			while (idx + idx2 < len && haystack[idx + idx2] == needle[idx2])
			{
				idx2++;
				if (needle[idx2] == '\0')
					return ((char *)haystack + idx);
			}
		}
		idx++;
	}
	return (NULL);
}
