/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:44:49 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/29 21:44:49 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "types.h"
/*Verified
Dependencies: ft_strlen*/
void	ft_putstr_fd(char *s, int fd)
{
	size_j	s_len;

	s_len = ft_strlen(s);
	write(fd, s, s_len);
}