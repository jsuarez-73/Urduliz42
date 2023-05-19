/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:43:41 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/17 21:43:41 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
/*Verified*/
int	ft_atoi(const char *s1)
{	
	size_j	counter;
	char	*offset;
	int		sign;

	sign = 0;
	counter = 0;
	if (*s1 == '+' || *s1 == '-')
		sign = 1;
	while (*s1 != '\0')
	{
		if (ft_isdigit(*s1) == 0 && sign == 0)
		{
			if (counter == 0)
				return (0);
			return (ft_makeint(offset, s1 - 1));
		}
		else
		{
			if (counter == 0)
				offset = (char *) s1;
				sign = 0;
			counter++;
		}
		s1++;
	}
}

static int	ft_makeint(const char *offset, const char *endup)
{	
	size_j	counter;
	int		number;

	counter = 1;
	number = 0;
	while (endup >= offset)
	{
		if (*endup != '+')
		{
			if (*endup == '-')
			{
				number = ~number + 1;
			}
			else
			{
				number += counter * (*endup - '0');
				counter *= 10;
			}
		}
		endup--;
	}
	return (number);
}
