/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:35:47 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 18:02:40 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Verified*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*element;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		tmp = f(lst->content);
		element = ft_lstnew(tmp);
		if (!element)
		{
			free(tmp);
			ft_lstclear(&element, del);
		}
		ft_lstadd_back(&new_lst, element);
		lst = lst->next;
	}
	return (new_lst);
}
