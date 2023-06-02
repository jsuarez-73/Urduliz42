/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:22:39 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/01 15:22:39 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != 0 && f != 0)
	{
		while (lst != 0)
		{
			f(lst);
			lst = lst->next;
		}
	}
}