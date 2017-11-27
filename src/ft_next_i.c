/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 19:29:23 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/26 21:12:39 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		ft_next_i(char **cg, int index, int size)
{
	index ++;
	while (index < size * size && cg[index / size][index % size] != '.')
		index++;
	return (index);
}
