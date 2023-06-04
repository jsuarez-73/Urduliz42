/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:14:36 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 17:56:53 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified
Dependencies: ft_strlen, ft_strchr, ft_strlcpy*/
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr((s1 + start), 0, (end - start + 1)));
}
