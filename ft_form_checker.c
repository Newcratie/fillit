/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 07:23:04 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/21 08:59:41 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		ft_pointlen(char *s)
{
	int		i;

	i = 0;
	while (*s)
	{
		if (*s == '.')
			i++;
		s++;
	}
	return (i == 12 ? 1 : 0);
}

int		ft_form_checker(char **s)
{
	if (ft_form0_1(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form0_2(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form1_0(*s) && ft_pointlen(*s))
		return (1);
	return (0);
}
