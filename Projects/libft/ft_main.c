/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:56:22 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/11 20:56:22 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "types.h"

void ft_bzero(void *, size_j);

int	main(void)
{
	char	cadena[] = "Esto es un array de caracteres";

	ft_bzero(cadena, 20);

	write(0, cadena, 45);
    write(0, "Estamos en main", 15);
	return (0);
}

