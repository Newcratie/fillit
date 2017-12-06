/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:59:56 by abbenham          #+#    #+#             */
/*   Updated: 2017/12/04 14:35:50 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	***ft_cormalloc(int i)
{
	int		j;
	int		k;
	char	***cor;

	j = 0;
	k = 0;
	if (!(cor = (char ***)malloc(sizeof(char **) * i + 1)))
		return (NULL);
	while (j < i)
	{
		if (!(cor[j] = (char **)malloc(sizeof(char *) * 3)))
			return (NULL);
		k = -1;
		while (++k < 3)
			if (!(cor[j][k] = (char *)malloc(sizeof(char) * 2)))
				return (NULL);
		j++;
	}
	cor[i] = 0;
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
	if(!(abs = (char **)malloc(sizeof(char *) * 4)))
		return (NULL);
	while (i < 4)
		if(!(abs[i++] = (char *)malloc(sizeof(char) * 3)))
			return (NULL);
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
	int	t;
	int	h;

	t = 0;
	h = 0;
	cor = ft_cormalloc(i);
	while (t < i)
	{
		abs = ft_corabsolue(tet[t]);
		h = 0;
		while (h < 3)
		{
			cor[t][h][0] = abs[h + 1][0] - abs[h][0];
			cor[t][h][1] = abs[h + 1][1] - abs[h][1];
			h++;
		}
		t++;
		free(abs);
	}
	return (cor);
}

char	***ft_parser(char **tab)
{
	char	***tet;
	char	***cor;
	int		i;

	if (1 > (i = ft_counttet(tab)))
		return (NULL);
	if (!(tet = ft_tabtotet(tab, i)))
		return (NULL);
	if (!(cor = ft_correlative(tet,i)))
		return (NULL);
	free(tet);
	free(tab);
	cor[i] = 0;
	return (cor);
}
