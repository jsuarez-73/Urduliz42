/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:17:13 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 17:58:51 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified*/
static size_t	ft_numlen(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		n_len;
	long	num;
	char	*str;

	n_len = ft_numlen(n);
	num = n;
	str = (char *)ft_calloc(n_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	str[n_len--] = '\0';
	while (num != 0)
	{
		str[n_len] = num % 10 + '0';
		n_len--;
		num = num / 10;
	}
	return (str);
}
