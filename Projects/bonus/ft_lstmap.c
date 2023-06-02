/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:35:47 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/01 16:35:47 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*Verified*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	int		counter;

	counter = 0;
	new_lst = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst));
	if (new_lst != 0 && f != 0 && del != 0)
	{
		while (lst != 0)
		{
			(new_lst + counter)->content = f(lst->content);
			if (lst->next == 0)
			{
				(new_lst + counter)->next = 0;
			}
			else
			{
				(new_lst + counter)->next = (new_lst + counter + 1);
			}
			del(lst->content);
			lst = lst->next;
			counter++;
		}
		return (new_lst);
	}
	return ((t_list *)0);
}
