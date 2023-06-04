/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:43:41 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 17:54:08 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	idx;
	int				num;
	int				sign;

	idx = 0;
	num = 0;
	sign = 1;
	while ((str[idx] >= '\t' && str[idx] <= '\r') || str[idx] == ' ')
		idx++;
	if (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			sign = -1;
		idx++;
	}
	while (str[idx] >= '0' && str[idx] <= '9')
	{
		num = num * 10 + str[idx] - '0';
		idx++;
	}
	return (num * sign);
}
