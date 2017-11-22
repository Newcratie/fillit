/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:20:44 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 11:21:10 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

void	ft_freetab(char **tab, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
}
