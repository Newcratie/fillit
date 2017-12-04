/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_cgs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:52:01 by jjauzion          #+#    #+#             */
/*   Updated: 2017/12/02 17:03:35 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_loop_cgs(char ***tetri)
{
	char	**cg;
	t_data	data;

	data.nb_tetri = ft_getnboftetri(tetri);
	data.cgs = ft_sqrt(data.nb_tetri * 4, "-sup");
	cg = ft_generate_grid(data.cgs);
	data.index = -1;
	data.i = -1;
	data.j = -1;
	data.cgs2 = data.cgs * data.cgs;
	while (!ft_fillit(cg, tetri, 0, data))
	{
		ft_freetab(&cg);
		data.cgs++;
		data.cgs2 = data.cgs * data.cgs;
		cg = ft_generate_grid(data.cgs);
	}
}
