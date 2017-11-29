/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copygrid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 19:46:24 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/26 20:03:08 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

char	**ft_copygrid(char **cg, int size)
{
	char	**ret;
	int		i;
	int		j;

	if (!(ret = (char **)malloc((sizeof(char*) * (size + 1)))))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		if (!(ret[i] = (char *)malloc((sizeof(char) * (size + 1)))))
			return (NULL);
	}
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
			ret[i][j] = cg[i][j];
		ret[i][j] = '\0';
	}
	ret[i] = 0;
	return (ret);
}
