/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:08:33 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/23 11:46:10 by jjauzion         ###   ########.fr       */
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
	int		ret;
//ft_putendl("\n\n>>>>>>>>>>");ft_putstr("i = ");ft_putnbr(i);ft_putstr(" ; t = ");ft_putendl(ft_itoa(t));
	ret = 1;
	cgs = ft_gettabsize(cg);
	nb_tetri = ft_getnboftetri(tetri);
//ft_putstr("cgs = ");ft_putendl(ft_itoa(cgs));
	if (t >= nb_tetri)
	{
ft_putstr("\n---> RESULT <---\n");
		ft_print_tab(cg);
		return (1);
	}
	if (i > (cgs * cgs - 1))
	{
		if (t > nb_tetri - 1)
			return (0);
		else
			return (1);
	}
//ft_putstr("nbr tetri = ");ft_putendl(ft_itoa(nb_tetri));ft_putendl("\nCG = ");ft_print_tab(cg);
//ft_putendl("\nTetri = "); ft_print_tab(tetri[t]);
	local_cg = ft_translate(cg, cgs, 0);
	trans_tetri = ft_translate(tetri[t], cgs, i);
	if (!local_cg || !trans_tetri)
		return (-1);
//ft_putendl("\nTrans_tetri = "); ft_print_tab(trans_tetri); ft_putendl("<<<<<<<<<<");
getchar();
	if (ft_add2grid(local_cg, trans_tetri, cgs))
	{
		ft_freetab(&trans_tetri);
		i = 0;
ft_putstr("\n>---- Add2grid : "); ft_putstr("i = "); ft_putnbr(i); ft_putstr(" ; t = "); ft_putnbr(t + 1);ft_putstr(" ; ret = "); ft_putnbr(ret);
		ret = ft_fillit(local_cg, tetri, t + 1, i);
ft_putstr("\ni = "); ft_putnbr(i); ft_putstr(" ; t = "); ft_putnbr(t);ft_putstr(" ; ret = ");ft_putnbr(ret); ft_putstr(" : Add2grid ------<\n");
	}
	else
		ft_freetab(&trans_tetri);
	if (ret)
	{
		i = ft_next_pos(tetri[t], cgs, i);
ft_putstr("\n>---- Next pos : "); ft_putstr("i = "); ft_putnbr(i); ft_putstr(" ; t = "); ft_putnbr(t); ft_putstr(" ; ret = "); ft_putnbr(ret);
		ret = ft_fillit(cg, tetri, t, i);
ft_putstr("\ni = "); ft_putnbr(i); ft_putstr(" ; t = "); ft_putnbr(t);ft_putstr(" ; ret = "); ft_putnbr(ret); ft_putstr(" : Next pos ------<\n");
	}
	ft_freetab(&local_cg);
	return (ret);
}
