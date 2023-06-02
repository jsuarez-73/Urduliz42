/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:17:13 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/28 22:17:13 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
/*Verified*/
char	*ft_itoa(int n)
{
	char		*digits;
	size_j		n_len;
	short int	sign;

	n_len = ft_numlen(n);
	sign = 0;
	if (n < 0)
	{
		n_len += 1;
		n = ~n + 1;
		sign = 1;
	}
	digits = (char *)malloc(sizeof(char) * (n_len + 1));
	if (digits != 0)
	{
		ft_makedigits(&digits, &n_len, n, sign);
		return (digits);
	}
	return ((char *)0);
}

void	ft_makedigits(char **digits, size_j *n_len, int n, short int sign)
{
	*(*digits + (*n_len)-- + 1) = '\0';
	while (n != 0)
	{
		*(*digits + (*n_len)--) = '0' + (n % 10);
		n -= n % 10;
		n /= 10;
	}
	if (sign == 1)
		*(*digits + *n_len) = '-';
}

size_j	ft_numlen(int n)
{
	size_j	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = ~n + 1;
	while (n != 0)
	{
		n -= n % 10;
		n /= 10;
		len++;
	}
	return (len);
}
