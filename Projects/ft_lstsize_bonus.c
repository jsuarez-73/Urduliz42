/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:07:48 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/30 20:07:48 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified*/
int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst != 0)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
