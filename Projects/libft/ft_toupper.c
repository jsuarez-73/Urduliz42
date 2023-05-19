/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:41:21 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/15 17:41:21 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifiying left*/
int	ft_toupper(int c)
{	
	int	dif_alpha;

	dif_alpha = 'a' - 'A';
	if ('a' <= c && c <= 'z')
	{
		return (c - dif_alpha);
	}
	return (c);
}
