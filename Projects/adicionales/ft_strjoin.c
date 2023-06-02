/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:31:27 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/23 20:31:27 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "types.h"
/*Verified
Dependencies: ft_strlen*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_j	s1_len;
	size_j	s2_len;
	size_j	total_len;
	size_j	limit;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = (s1_len--) + (s2_len) + 1;
	limit = total_len - (s2_len--) - 1;
	joined = (char *)malloc(total_len);
	if (joined != 0)
	{
		*(joined + total_len--) = '\0';
		while (total_len--)
		{
			if (total_len >= limit)
				*(joined + total_len) = *(s2 + s2_len--);
			else
				*(joined + total_len) = *(s1 + s1_len--);
		}
		return (joined);
	}
	return ((void *)0);
}
