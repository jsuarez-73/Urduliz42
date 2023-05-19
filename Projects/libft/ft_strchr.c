/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:50:23 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/15 17:50:23 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifying left.*/
char	*ft_strchr(const char *s, int c)
{	
	char	*f_found;

	while (*s != '\0')
	{
		if (*s == c)
		{
			f_found = s;
			return (f_found);
		}
		s++;
	}
	return (c);
}
