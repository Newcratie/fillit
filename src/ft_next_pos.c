/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:09:48 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 11:33:51 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

int		ft_next_pos(char **tab, size_t size, size_t i)
{
	size_t	count;
	size_t	j;
	char	**ret;

	if (!(ret = (char **)malloc(sizeof(char *) * size)))
		return (NULL);
	j = -1;
	while (++j < size)
		ret[j] = ft_strnew(size);
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
			ft_freetab(ret, size);
			return (i);
		}
		i++;
	}
	ft_freetab(ret, size);
	free(ret);
	return (size * size);
}
