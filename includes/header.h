/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 01:36:54 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/26 21:52:32 by jjauzion         ###   ########.fr       */
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
char	*ft_realloc(char *ptr, int old_size, int new_size);
char	*ft_read(int fd, char *str);
char	**ft_file_to_tab(char *path);
int		ft_error_checker(char **tab);
char	**ft_tetrisplit(char const *s, char c);
char	**ft_replace(char **tab);
int		ft_form_checker(char **s);
int		ft_form0_1(char *s);
int		ft_form0_2(char *s);
int		ft_form1_0(char *s);
int		ft_form1_1(char *s);
int		ft_form3_0(char *s);
int		ft_form4_0(char *s);
int		ft_form5_0(char *s);
int		ft_form5_1(char *s);
int		ft_form6_0(char *s);
int		ft_form7_0(char *s);
int		ft_form7_1(char *s);
int		ft_form8_0(char *s);

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
