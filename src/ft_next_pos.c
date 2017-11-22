/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:09:48 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 18:55:44 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Find the next possible position of the tetri in the grid.
**	Return the index value i of this position with:
**	line = i / size ; column = i % size
**	If malloc for temporary char ** fails, return -1.
*/

#include "header.h"
#include "libft.h"

int		ft_next_pos(char **tab, size_t size, size_t i)
{
	size_t	count;
	size_t	j;
	char	**ret;

	ret = NULL;
	count = 0;
	i++;
	while (i <= size * size - 1)
	{
		ret = ft_translate(tab, size, i);
		j = 0;
		count = 0;
		while (j <= size * size - 1)
		{
			if (ret[j / size][j % size] != '.')
				count++;
			j++;
		}
		if (count == 4)
		{
			ft_freetab(ret);
			return (i);
		}
		i++;
	}
	ft_freetab(ret);
	free(ret);
	return (size * size);
}
