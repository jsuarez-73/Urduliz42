/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:54:00 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 17:59:28 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified
Dependencies: ft_strlen*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	unsigned int	idx;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	idx = 0;
	while (s[idx] != '\0')
	{
		str[idx] = f(idx, s[idx]);
		idx++;
	}
	str[idx] = '\0';
	return (str);
}
