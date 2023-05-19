/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:46:45 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/15 17:46:45 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifying left*/
int	ft_tolower(int c)
{
	int	dif_alpha;

	dif_alpha = 'a' - 'A';
	if ('A' <= c && c <= 'Z')
	{
		return (c + dif_alpha);
	}
	return (c);
}
