/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add2grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:24:11 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 21:49:07 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Try to merge the tetri given in argument into the current grid 'CG'
**	If the merge is possible, the CG grid is modified with addition of the
**	tetri.
**	If the merge fail CG is not modified.
**
**	Return value:
**	0 if the merge fails.
**	1 if the merge suceed.
*/

#include "libft.h"
#include "header.h"

int		ft_add2grid(char **cg, char **tetri, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (cg[j][i] != '.' && tetri[j][i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tetri[j][i] != '.')
				cg[j][i] = tetri[j][i];
			j++;
		}
		i++;
	}
	return (1);
}
