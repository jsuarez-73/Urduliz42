/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:50:49 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/29 21:50:49 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "types.h"
/*Verified
Dependencies: ft_strlen*/
void	ft_putendl_fd(char *s, int fd)
{
	size_j	s_len;
	char	new_line;

	new_line = '\n';
	s_len = ft_strlen(s);
	write(fd, s, s_len);
	write(fd, &new_line, 1);
}
