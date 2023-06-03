/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:28:35 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/29 15:28:35 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	counter;

	counter = 0;
	while (*s != '\0')
	{
		f(counter, (s + counter));
		counter++;
	}
}
