/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_grid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:29:28 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 12:42:35 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

char	**ft_generate_grid(size_t size)
{
	char	**cg;
	size_t	i;

	if (!(cg = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (!(cg[i] = ft_strcnew(size, '.')))
			return (NULL);
		i++;
	}
	cg[i] = 0;
	return (cg);
}
