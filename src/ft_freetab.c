/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:20:44 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 20:50:19 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

void	ft_freetab(char ***tab)
{
	int i;

	i = -1;
	while (tab[0][++i])
		free(tab[0][i]);
	free(tab[0][i]);
	free(*tab);
}
