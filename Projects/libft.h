/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesus <jesus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:58:56 by jsuarez-          #+#    #+#             */
/*   Updated: 2023/06/04 17:29:36 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
/*node Structure*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
/*string functions*/
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *s, const char *t, size_t c);
int		ft_strncmp(const char *s, const char *t, size_t c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *s, const char *t, size_t c);
size_t	ft_strlcat(char *s, const char *t, size_t c);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
int		ft_atoi(const char *s);
char	*ft_itoa(int c);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s, char const *t);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s, char const *t);
char	*ft_substr(char const *s, unsigned int c, size_t n);
/*memory functions*/
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *s, const void *t, size_t n);
void	*ft_memcpy(void *s, const void *t, size_t n);
int		ft_memcmp(const void *s, const void *t, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n, size_t c);
/*IO functions*/
void	ft_putchar_fd(char c, int n);
void	ft_putendl_fd(char *c, int n);
void	ft_putnbr_fd(int n, int c);
void	ft_putstr_fd(char *c, int n);
/*c_type functions*/
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
/*list functions*/
void	ft_lstadd_back(t_list **l, t_list *n);
void	ft_lstadd_front(t_list **l, t_list *n);
void	ft_lstclear(t_list **l, void (*del)(void *));
void	ft_lstdelone(t_list *l, void (*del)(void *));
void	ft_lstiter(t_list *l, void (*f)(void *));
t_list	*ft_lstlast(t_list *l);
t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *c);
int		ft_lstsize(t_list *l);
#endif