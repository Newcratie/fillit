/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 19:35:41 by jjauzion          #+#    #+#             */
/*   Updated: 2017/12/04 14:36:14 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		ft_fillit(char **cg, char ***tetri, int t, t_data data)
{
	int		tmp;

	if (t >= data.nb_tetri)
	{
		ft_print_tab(cg);
		return (1);
	}
	data.index = ft_next_i(cg, data.index, data.cgs);
	if (data.index >= data.cgs2)
		return (0);
	if (ft_fit(cg, tetri[t], data.index, data.cgs))
	{
		ft_add2grid(cg, tetri[t], data, t);
		tmp = data.index;
		data.index = -1;
		if (ft_fillit(cg, tetri, t + 1, data))
			return (1);
		data.index = tmp;
		ft_remove_tetri(cg, tetri[t], data);
	}
	return (ft_fillit(cg, tetri, t, data));
}
