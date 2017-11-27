/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:14:11 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/26 22:24:51 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Regarde si le tetri peut rentrer a la position pointer par index.
**	ft_fit ne verifie pas le case pointer par index mais uniquement les 3 autres
**	cases adjacentes couvertes par le tetri.
**	La case index doit donc etre vide!
**	
**	Retrun value
**	1 si le tetri rentre
**	0 sinon
*/

#include "libft.h"
#include "header.h"

int		ft_fit(char	**cg, char **tetri, int index, int size)
{
	int	i;
	int	j;
	int	n;

	i = index / size + tetri[0][0];
	j = index % size + tetri[0][1];
	if (i < 0 || j < 0 || i >= size || j >= size)
		return (0);
	n = 0;
	while (++n < 4)
	{
		if (cg[i][j] != '.')
			return (0);
		i = i + tetri[n][0];
		j = j + tetri[n][1];
		if (i < 0 || j < 0 || i >= size || j >= size)
			return (0);
	}
	return (1);
}
