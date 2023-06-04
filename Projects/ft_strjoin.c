/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:31:27 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 17:56:04 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified
Dependencies: ft_strlen*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	join = ft_calloc(len, sizeof(char));
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, ft_strlen(s1) + 1);
	ft_strlcpy(join + ft_strlen(s1), s2, len);
	return (join);
}
