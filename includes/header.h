/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 01:36:54 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/29 17:23:04 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define VALIDE	str[i] == '.' || str[i] == 35 || str[i] == '\n'
# define END str[i - 1] == '\n' && str[i] == '\n' 
# define NEW str[i + 1] == '.' || str[i + 1] == 35
# define TETRI	str[i] == 35
# define EMPTY	str[i] == '.'
# define S s[
# define IS ] == 35

# include "libft.h"
# include <stdio.h>

char	***ft_correlative(char ***tet, int i);
char	**ft_corabsolue(char **tab);
char	***ft_cormalloc(int i);
int		*ft_nexthash(char **tet, int i, int j);
char	***ft_tabtotet(char **tab, int i);
int		ft_c_count(char *s, char c);
int  	ft_surround(char *s);
void	ft_printab(char **tab);
void	ft_printabl(char **tab);
void	ft_printnonl(char **tab);
int		ft_good(char *s);
int		ft_valide(char *s);
int		ft_counttet(char **tab);
char	***ft_tetmalloc(int i);
char	***ft_parser(char **tab);
int		ft_ptrlen(char const *str);
char	*ft_realloc(char *ptr, int old_size, int new_size);
char	*ft_read(int fd, char *str);
char	**ft_file_to_tab(char *path);
char	**ft_tetrisplit(char const *s, char c);

char	**ft_generate_grid(size_t size);
void	ft_freetab(char ***tab);
int		ft_fit(char **cg, char **tetri, int index, int size);
void	ft_print_tab(char **tab);
void	ft_add2grid(char **cg, char **tetri, int index, int t);
int		ft_gettabsize(char **tab);
int		ft_getnboftetri(char ***tab);
int		ft_next_i(char **cg, int index, int size);
char	**ft_copygrid(char **cg, int size);
int		ft_fillit(char **cg, char ***tetri, int t, int i);
void	ft_print_tetri(char **tetri, int nb, int size);
int		ft_fitbis(char **cg, char **tetri, int index, int size);

char	**ft_translate(char **tab, size_t size, size_t i);
int		ft_next_pos(char **tab, size_t size, size_t i);
char	***ft_resize_tetri(char ****tetri, int nb_tetri, size_t new_size);
void	ft_loop_cgs(char ***tetri);
void	ft_save_sol(t_list **sol, char **cg, int cgs);
void	ft_print_list(t_list *lst);

t_list	*ft_lstlnew(void *content, size_t content_size);

#endif
