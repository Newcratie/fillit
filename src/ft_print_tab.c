/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:45:06 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 10:47:35 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_print_tab(char **tab, size_t size)
{
	size_t	i;
	i = -1;
	while (++i < size)
		ft_putendl(tab[i]);
}
