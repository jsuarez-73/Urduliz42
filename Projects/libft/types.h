/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:22:00 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/11 21:22:00 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Revisar como se crean los headers*/
#define MAX 1844674407370955165
#define MIN 4294967295
typedef	unsigned int	size_j;
void	ft_bzero(void *, size_j);
int	ft_isalnum(int);
int	ft_isalpha(int);
int	ft_isascii(int);
int	ft_isdigit(int);
int	ft_isprint(int);
void	*ft_memcpy(void *restrict, const void *restrict, size_j);
void	*ft_memset(void *, int, size_j);
size_j	ft_strlen(const char *);
void	*ft_memmove(void *, const void *, size_j);