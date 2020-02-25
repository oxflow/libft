/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/01 00:08:26 by fdavid            #+#    #+#             */
/*   Updated: 2016/02/19 01:46:14 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <args.h>
# include <ft_printf.h>
# include <get_next_line.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** io: Fonctions d'entree et de sortie
*/

void				ft_putc(char *s, char c);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendc(char c);
void				ft_putendl(char *str);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putendlnbr(int n);
size_t				ft_putid(char *str);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char *str);
void				ft_putstr_fd(const char *s, int fd);
void				ft_puttab(char **tab);
void				ft_die(char *str, int error);

/*
** lists: Fonctions de manipulation de listes chainees.
*/

void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstbubble(t_list **list, int (*f)(void *, void *));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(const void *content, size_t content_size);

/*
** memory: Gestion des pointeurs et de la memoire.
*/

void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_realloc(void *ptr, size_t size);
void				ft_swap(void *a, void *b);

/*
** others: Fonctions d'affichage, get_next_line, de tris, de convertion de
** valeurs (atoi et itoa), etc...
*/

unsigned int		ft_abs(int n);
int					ft_atoi(const char *str);
void				ft_bubble_int(int *tab, int size, char reverse);
size_t				ft_intlen(int n);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isnumeric(char *s);
int					ft_isprint(int c);
char				*ft_itoa(int n);
int					ft_round(float n);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_xtoi(char *str);
int					ft_power(int n, int m);

/*
** strings: Fonctions de manipulation de chaines de caracteres.
*/

char				*ft_stradd(char *s1, char const *s2);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_strclr(char *str);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *str);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(const char *s1, const char *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t len);
size_t				ft_strlen(const char *str);
int					ft_strleni(const char *str);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_strmove(char **s, int pos);
char				*ft_strncat(char *dest, const char *src, size_t len);
char				*ft_strnchr(char *s, int c, int i);
char				*ft_strncpy(char *dest, const char *src, size_t len);
int					ft_strncmp(char const *s1, char const *s2, size_t len);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *big, const char *little, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strreplace(char *find, char *rep, char *str);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *meule, const char *aiguille);
char				*ft_strsub(char const *s1, size_t start, size_t len);
char				*ft_strtrim(char *str);
int					ft_strchar(char *str, char c);

/*
** tabs: Fonctions de manipulation de tableaux de chaines de caracteres.
*/

void				ft_bubble_str(char **tab, char reverse);
void				ft_pushback_tab(char *item, char ***tab);
char				**ft_subtab(char **tab, int start, int len);
void				ft_tabdel(char ***tab);
char				**ft_tabdup(char **tab);
int					ft_tabfstr(char **tab, char *str);
size_t				ft_tablen(char **tab);
char				**ft_tabnew(size_t size);
char				**ft_tabstrip(char **tab, int len);

#endif
