/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:14:50 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 17:55:17 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start || ft_strlen(s) == 0 || len == 0)
		return (ft_strdup(""));
	new_len = 0;
	if (ft_strlen(s) - start > len)
		new_len = len + 1;
	else
		new_len = ft_strlen(s) - start + 1;
	sub = ft_calloc(new_len, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, new_len);
	return (sub);
}
