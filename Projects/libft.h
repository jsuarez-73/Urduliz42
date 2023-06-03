/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuarez- <jsuarez-@student.42Urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:58:56 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/05/30 16:58:56 by jsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>
/*node Structure*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
/*string functions*/
int		ft_toupper(int);
int		ft_tolower(int);
char	*ft_strrchr(const char *, int);
char	*ft_strnstr(const char *, const char *, size_t);
int		ft_strncmp(const char *, const char *, size_t);
size_t	ft_strlen(const char *);
size_t	ft_strlcpy(char *, const char *, size_t);
size_t	ft_strlcat(char *, const char *, size_t);
char	*ft_strdup(const char *);
char	*ft_strchr(const char *, int);
int		ft_atoi(const char *);
char	*ft_itoa(int);
char	**ft_split(char const *, char);
void	ft_striteri(char *, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *, char const *);
char	*ft_strmapi(char const *, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *, char const *);
char	*ft_substr(char const *, unsigned int, size_t);
/*memory functions*/
void	*ft_memset(void *, int, size_t);
void	*ft_memmove(void *, const void *, size_t);
void	*ft_memcpy(void *, const void *, size_t);
int		ft_memcmp(const void *, const void *, size_t);
void	*ft_memchr(const void *, int, size_t);
void	ft_bzero(void *, size_t);
void	*ft_calloc(size_t, size_t);
/*IO functions*/
void	ft_putchar_fd(char, int);
void	ft_putendl_fd(char *, int);
void	ft_putnbr_fd(int, int);
void	ft_putstr_fd(char *, int);
/*c_type functions*/
int		ft_isalnum(int);
int		ft_isalpha(int);
int		ft_isascii(int);
int		ft_isdigit(int);
int		ft_isprint(int);
/*list functions*/
void	ft_lstadd_back(t_list **, t_list *);
void	ft_lstadd_front(t_list **, t_list *);
void	ft_lstclear(t_list **, void (*del)(void *));
void	ft_lstdelone(t_list *, void (*del)(void *));
void	ft_lstiter(t_list *, void (*f)(void *));
t_list	*ft_lstlast(t_list *);
t_list	*ft_lstmap(t_list *, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *);
int		ft_lstsize(t_list *);
#endif