/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:59:56 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/29 17:28:52 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_counttet(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;

	while (tab[i])
	{
		if (1 == ft_valide(tab[i]))
			j++;
		else if (-1 == ft_valide(tab[i]))
			return (0);
		i++;
	}
	return (j);
}

char	***ft_tetmalloc(int i)
{
	int		j;
	int		k;
	char	***tetri;

	j = 0;
	k = 0;
	tetri = (char ***)malloc(sizeof(char **) * i + 1);
	while (j < i)
	{
		tetri[j] = (char **)malloc(sizeof(char *) * 5);
		k = 0;
		while (k < 3)
			tetri[j][k++] = (char *)malloc(sizeof(char ) * 5);
		j++;
	}
	return (tetri);
}

char	***ft_cormalloc(int i)
{
	int		j;
	int		k;
	char	***cor;

	j = 0;
	k = 0;
	cor = (char ***)malloc(sizeof(char **) * i + 1);
	while (j < i)
	{
		cor[j] = (char **)malloc(sizeof(char *) * 3);
		k = 0;
		while (k < 3)
			cor[j][k++] = (char *)malloc(sizeof(char ) * 2);
		j++;
	}
	return (cor);
}

char	***ft_tabtotet(char **tab, int i)
{
	char	***tet;
	int		j;

	j = 0;
	tet = ft_tetmalloc(i);
	i = 0;
	while (tab[i])
	{
		if (ft_c_count(tab[i], '.') == 12)
			tet[j++] = ft_strsplit(tab[i], 10);
		i++;
	}
	tet[i] = NULL;
	return (tet);
}

char	**ft_corabsolue(char **tab)
{
	char	**abs;
	int		i;
	int		j;
	int		h;

	i = 0;
	h = 0;
	abs = (char **)malloc(sizeof(char *) * 4);
	while (i < 4)
		abs[i++] = (char *)malloc(sizeof(char) * 3);
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
			{
				abs[h][0] = i;
				abs[h][1] = j;
				h++;
			}
			j++;
		}
		i++;
	}
	return (abs);
}

char	***ft_correlative(char ***tet, int i)
{
	char	***cor;
	char	**abs;

	abs = ft_corabsolue(tet[0]);
	cor = ft_cormalloc(i);
	cor[0][0][0] = abs[1][0] - abs[0][0];
	cor[0][0][1] = abs[1][1] - abs[0][1];

	return (cor);
}

char	***ft_parser(char **tab)
{
	char	***tet;
	char	***cor;
	char	**abs;
	int		i;
	int		j;

	j = 0;
	i = ft_counttet(tab);
	tet = ft_tabtotet(tab, i);
	cor = ft_correlative(tet,i);
	ft_putchar('\n'); 
	abs = ft_corabsolue(tet[0]);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 2)
		{
			ft_putnbr(abs[i][j++]);
			ft_putchar('_');
		}
			ft_putchar('\n');
		i++;
	}
	ft_putnbr(cor[0][0][0]);
			ft_putchar('\n');
	ft_putnbr(cor[0][0][1]);
			ft_putchar('\n');
	return (tet);
}
