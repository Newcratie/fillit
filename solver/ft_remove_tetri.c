/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_tetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:01:10 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/28 15:11:05 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_remove_tetri(char **cg, char **tetri, int index)
{
	int i;
	int j;
	int n;
	int size;

	size = ft_gettabsize(cg);
	i = index / size;
	j = index % size;
	n = -1;
	while (++n < 4)
	{
		cg[i][j] = '.';
		i = i + tetri[n][0];
		j = j + tetri[n][1];
	}
}
