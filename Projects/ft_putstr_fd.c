/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:44:49 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 17:31:55 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified
Dependencies: ft_strlen*/
void	ft_putstr_fd(char *s, int fd)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	write(fd, s, s_len);
}
