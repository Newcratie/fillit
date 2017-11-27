/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 20:31:02 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/26 21:51:46 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_print_tetri(char **tetri, int t, int size)
{
	int		j;
	char	**tmp;

	tmp = ft_generate_grid(size);
	j = -1;
	while (++j < size)
	{
		if (ft_fitbis(tmp, tetri, j, size))
		{
			ft_add2grid(tmp, tetri, j, t);
			j = size;
		}
	}
	ft_print_tab(tmp);
	ft_freetab(&tmp);
}
