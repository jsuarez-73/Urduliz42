/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:24:19 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/24 20:24:19 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
/*Verified
Dependencies: ft_substr, ft_strlen*/
char	**ft_split(char const *s, char c)
{
	char	**sq_c;
	size_j	sq_l;
	size_j	counter;
	char	**res;

	sq_c = ft_seqchr(s, c);
	sq_l = ft_ptrlen((const char **)sq_c) / 2;
	counter = 0;
	res = (char **)malloc(sizeof(char *) * (sq_l + 1));
	if (res != 0 && !(*sq_c == s && *(sq_c + 1) == (s + ft_strlen(s) - 1)))
	{
		while (counter < sq_l)
		{
			*(res + counter) = ft_substr(*sq_c, 0, *(sq_c + 1) - *sq_c + 1);
			counter++;
			sq_c += 2;
		}
		*(res + counter) = (char *)0;
		free(sq_c - sq_l * 2);
		return (res);
	}
	free(sq_c);
	free(res);
	return ((char **)0);
}

static char	**ft_seqchr(const char *s, char c)
{
	char	**seq;
	int		flag;

	flag = 0;
	seq = (char **)malloc(sizeof(char *));
	if (seq != 0)
	{
		while (*s != '\0')
		{
			ft_seqchr_validation(&seq, &s, c, &flag);
			s++;
		}
		return (seq);
	}
	return ((void *)0);
}

static void	ft_seqchr_validation(char ***seq, const char **s, char c, int *flag)
{
	if (**s != c && *flag == 0 && *(*s + 1) != '\0')
	{
		*seq = ft_addptr(*seq, *(char **)s);
		*flag = 1;
	}
	else if (**s != c && *flag == 1 && (*(*s + 1) == c || *(*s + 1) == '\0'))
	{
		*seq = ft_addptr(*seq, *(char **)s);
		*flag = 0;
	}
	else if (**s != c && *flag == 0 && *(*s + 1) == '\0')
	{
		*seq = ft_addptr(*seq, *(char **)s);
		*seq = ft_addptr(*seq, *(char **)s);
	}
}

static char	**ft_addptr(char **seq, char *ptr)
{
	char	**tmp;
	size_j	counter;
	size_j	sq_l;

	counter = 0;
	sq_l = ft_ptrlen((const char **)seq);
	tmp = (char **)malloc(sizeof(char *) * (sq_l + 2));
	if (tmp != 0)
	{
		while (*(seq + counter) != 0)
		{
			*(tmp + counter) = *(seq + counter);
			counter++;
		}
		*(tmp + counter++) = ptr;
		*(tmp + counter) = (char *)0;
		free(seq);
		return (tmp);
	}
	return ((char **)0);
}

static size_j	ft_ptrlen(const char **seq)
{
	size_j	counter;

	counter = 0;
	while (*(seq + counter) != 0)
	{
		counter++;
	}
	return (counter);
}
