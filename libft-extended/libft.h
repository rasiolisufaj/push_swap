/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: raisufaj <raisufaj@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/11/12 18:17:34 by raisufaj          #+#    #+#             */
/*   Updated: 2024/11/12 18:17:34 by raisufaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 15
# endif
# define MAX_FD 10240

# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Libft Functions
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_itoa(int n);
char	*ft_strdup(const char *src);
char	**ft_split(char const *s, char c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *big, const char *little, size_t len);

void	ft_bzero(void *s, size_t n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	*ft_memset(void *dest, int c, size_t numbyte);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

// Get Next Line Functions
char	*get_next_line(int fd);
char	*ft_strjoin_gnl(char *s1, char *s2);
void	fill_str_gnl(char *res, char *s1, char *s2);

// FT_PRINTF Functions
int		print_int(int num);
int		print_char(char c);
int		print_string(char *s);
int		print_pointer(void *ptr);
int		print_unsigned(unsigned int n);
int		ft_printf(const char *format, ...);
int		print_hex(unsigned long n, char format);

#endif