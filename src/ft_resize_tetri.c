/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize_tetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:58:22 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 21:09:58 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Resize all the tetriminos into a bigger grid
**	The tetri shall be stored in a 3d char array, each tetri (i.e. tetri[i])
**	shall be terminated by a '\0', each line of a tetri (i.e. tetri[i][j])
**	shall be terminated by a '\0'
**
**	Return value :
**	The function allocate a new 3d char array with the resized tetri and
**	return a pointer to this array.
**	The input array is freed for all dimension.
**	
*/

#include "libft.h"
#include "header.h"

char ***ft_resize_tetri(char ****tetri, int nb_tetri, size_t new_size)
{
	int		i;
	int		j;
	int		k;
	char	***ret;

	if (!(ret = (char ***)malloc(sizeof(char ***) * nb_tetri)))
		return (NULL);
	i = -1;
	while (++i < nb_tetri)
		if (!(ret[i] = ft_generate_grid(new_size)))
			return (NULL);
	i = -1;
	while (++i < nb_tetri)
	{
		j = -1;
		while (tetri[0][i][++j])
		{
			k = -1;
			while (tetri[0][i][j][++k])
				ret[i][j][k] = tetri[0][i][j][k];
		}
	}	
	i = -1;
	while (++i < nb_tetri)
		ft_freetab(&tetri[0][i]);
	free(*tetri);
	return (ret);
}
