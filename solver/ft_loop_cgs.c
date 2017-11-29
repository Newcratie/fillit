/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_cgs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:52:01 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/28 14:43:52 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_loop_cgs(char ***tetri)
{
	int		cgs;
	int		nb_tetri;
	char	**cg;

	nb_tetri = ft_getnboftetri(tetri);
	cgs = ft_sqrt(nb_tetri * 4, "-sup");
	ft_putstr("nb of tetri = ");
	ft_putendl(ft_itoa(nb_tetri));
	ft_putstr("cgs = ");
	ft_putendl(ft_itoa(cgs));
	cg = ft_generate_grid(cgs);
	while (!ft_fillit(cg, tetri, 0, -1))
	{
		ft_freetab(&cg);
		cgs++;
		cg = ft_generate_grid(cgs);
	}
}
