/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:08:33 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/23 12:47:19 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	If one of the malloc fails, return -1
*/

#include "libft.h"
#include "header.h"
#include <stdio.h>
int		ft_fillit(char **cg, char ***tetri, int t, int i)
{
	char	**local_cg;
	int		cgs;
	int		nb_tetri;
	char	**trans_tetri;

	cgs = ft_gettabsize(cg);
	nb_tetri = ft_getnboftetri(tetri);
	if (t >= nb_tetri)
	{
ft_putstr("\n---> Solution:\n");
		ft_print_tab(cg);
		return (1);
	}
	if (i > (cgs * cgs - 1))
		return (1);
	local_cg = ft_translate(cg, cgs, 0);
	trans_tetri = ft_translate(tetri[t], cgs, i);
	if (!local_cg || !trans_tetri)
		return (-1);
	if (ft_add2grid(local_cg, trans_tetri, cgs))
	{
		ft_freetab(&trans_tetri);
		return (ft_fillit(local_cg, tetri, t + 1, 0) && ft_fillit(cg, tetri, t, ft_next_pos(tetri[t], cgs, i)));
	}
	else
	{
		ft_freetab(&trans_tetri);
		ft_freetab(&local_cg);
		i = ft_next_pos(tetri[t], cgs, i);
		return (ft_fillit(cg, tetri, t, i));
	}
}
