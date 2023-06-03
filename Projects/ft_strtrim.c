/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:14:36 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/23 21:14:36 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified
Dependencies: ft_strlen, ft_strchr, ft_strlcpy*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*offset;
	char	*end;
	char	*trimmed;

	end = (char *)s1 + ft_strlen(s1);
	offset = (char *)s1;
	while (offset <= end)
	{
		if (ft_strchr(set, *offset) == 0)
			break ;
		offset++;
	}
	while (offset <= end)
	{
		if (ft_strchr(set, *end) == 0)
			break ;
		end--;
	}
	trimmed = (char *)malloc(end - offset + 2);
	if (trimmed != 0)
	{
		if (ft_strlcpy(trimmed, offset, end - offset + 1) > 0)
			return (trimmed);
	}
	return ((void *)0);
}
