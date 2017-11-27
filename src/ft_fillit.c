/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 19:35:41 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/27 15:53:03 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"
#include <stdio.h>
int		ft_fillit(char **cg, char ***tetri, int t, int index)
{
	int		cgs;
	int		nb_tetri;
	char	**local_cg;

	cgs = ft_gettabsize(cg);
	nb_tetri = ft_getnboftetri(tetri);
	if (t >= nb_tetri)
	{
		ft_putendl("\n---------SOLUTION FOUND !!----------");
		ft_print_tab(cg);
		return (1);
	}
	index = ft_next_i(cg, index, cgs);
	if (index >= cgs * cgs)
		return (1);
	if (ft_fit(cg, tetri[t], index, cgs))
	{
		local_cg = ft_copygrid(cg, cgs);
		ft_add2grid(local_cg, tetri[t], index, t);
		ft_fillit(local_cg, tetri, t + 1, -1);
		ft_freetab(&local_cg);
	}
	ft_fillit(cg, tetri, t, index);
	return (1);
}
