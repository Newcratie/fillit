/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add2grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:24:11 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 10:52:01 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		ft_add2grid(char **cg, char **tetri, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (cg[j][i] != '.' && tetri[j][i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tetri[j][i] != '.')
				cg[j][i] = tetri[j][i];
			j++;
		}
		i++;
	}
	return (1);
}

int		main()
{
	char	**tab;
	char	**tetri;
	size_t	size;
	size_t	i;

	size = 4;
	tab = (char **)malloc(sizeof(char *) * size);
	i = -1;
	while (++i < size)
		tab[i] = ft_strcnew(size, '.');
	tab[0][2] = 'A';
	tab[1][0] = 'A';
	tab[1][1] = 'A';
	tab[1][2] = 'A';
	tetri = (char **)malloc(sizeof(char *) * size);
	i = -1;
	while (++i < size)
		tetri[i] = ft_strcnew(size, '.');
	tetri[1][2] = 'B';
	tetri[2][0] = 'B';
	tetri[2][1] = 'B';
	tetri[2][2] = 'B';
	ft_putendl("-----------Avant----------");
	ft_putendl("cg:");
	ft_print_tab(tab, size);
	ft_putendl("tetri:");
	ft_print_tab(tetri, size);
	i = ft_add2grid(tab, tetri, size);
	ft_putstr("\ni : ");
	ft_putendl(ft_itoa(i));
	ft_putendl("\n----------Apres----------");
	ft_putendl("cg:");
	ft_print_tab(tab, size);
	ft_putendl("tetri:");
	ft_print_tab(tetri, size);
	return (0);
}
