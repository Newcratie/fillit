/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add2grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:28:38 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/26 19:28:45 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_add2grid(char **cg, char **tetri, int index, int t)
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
		cg[i][j] = 'A' + t;
		i = i + tetri[n][0];
		j = j + tetri[n][1];
	}
}
