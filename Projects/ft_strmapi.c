/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:54:00 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/29 14:54:00 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified
Dependencies: ft_strlen*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	**strmapped;

	s_len = ft_strlen(s) + 1;
	strmapped = (char *)malloc(sizeof(char) * (s_len));
	if (strmapped != 0)
	{
		*(strmapped + s_len) = '\0';
		while (s_len--)
		{
			*(strmapped + s_len) = f(s_len, *(s + s_len));
			s_len--;
		}
		return (strmapped);
	}
	return ((char *)0);
}
