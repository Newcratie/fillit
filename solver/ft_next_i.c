/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 19:29:23 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/28 16:06:16 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		ft_next_i(char **cg, int index, int size)
{
	int i;
	int j;

	index ++;
	i = index / size;
	j = index % size;
	while (i < size)
	{
		while (j < size)
		{
			if (cg[i][j] == '.')
				return (size * i + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (size * size);
}
