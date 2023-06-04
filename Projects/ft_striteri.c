/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:28:35 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 18:00:15 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	idx;

	if (!s || !f)
		return ;
	idx = 0;
	while (s[idx] != '\0')
	{
		(*f)(idx, s + idx);
		idx++;
	}
}
