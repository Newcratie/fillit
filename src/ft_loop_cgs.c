/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_cgs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:26:20 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/23 19:21:24 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_loop_cgs(char ***tetri)
{
	int		nb_tetri;
	int		cgs;
	char	**cg;
	t_list	*lst_sol;

	lst_sol = NULL;
	nb_tetri = ft_getnboftetri(tetri);
ft_putstr("nb_tetri = ");
ft_putendl(ft_itoa(nb_tetri));
	cgs = ft_sqrt(nb_tetri * 4) + 1;
	while (!lst_sol)
	{
		ft_putstr("cgs = ");
		ft_putendl(ft_itoa(cgs));
		tetri = ft_resize_tetri(&tetri, nb_tetri, cgs);
		ft_putendl("tetri resized ok");
		cg = ft_generate_grid(cgs);
		ft_putendl("cg generated");
		if (ft_fillit(cg, tetri, 0, 0, &lst_sol) == -1)
		{
			ft_putendl("Erreur d'allocation dans le fillit");
			return ;
		}
		cgs++;
	}
	ft_print_list(lst_sol);
}
