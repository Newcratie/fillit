/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 01:36:54 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/21 08:32:39 by abbenham         ###   ########.fr       */
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
#endif
