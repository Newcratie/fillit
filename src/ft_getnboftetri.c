/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnboftetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:21:36 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 20:22:10 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		ft_getnboftetri(char ***tab)
{
	int		size;

	size = 0;
	while (tab[size])
		size++;
	return (size);
}
