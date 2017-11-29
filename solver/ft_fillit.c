/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 19:35:41 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/28 16:32:18 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		ft_fillit(char **cg, char ***tetri, int t, int index)
{
	int		cgs;
	int		nb_tetri;

	cgs = ft_gettabsize(cg);
	nb_tetri = ft_getnboftetri(tetri);
	if (t >= nb_tetri)
	{
		ft_print_tab(cg);
		return (1);
	}
	index = ft_next_i(cg, index, cgs);
	if (index >= cgs * cgs)
		return (0);
	if (ft_fit(cg, tetri[t], index, cgs))
	{
		ft_add2grid(cg, tetri[t], index, t);
		if (ft_fillit(cg, tetri, t + 1, -1))
			return (1);
		ft_remove_tetri(cg, tetri[t], index);
	}
	return (ft_fillit(cg, tetri, t, index));
}
