/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 07:23:04 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/21 09:52:06 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		ft_pointlen(char *s)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] == '.')
			i++;
		j++;
	}
	//if (s[4] == '\n' && s[9] == '\n' && s[14] == '\n')
		return (i == 12 ? 1 : 0);
	return (0);
}

int		ft_form_checker(char **s)
{
	if (ft_form0_1(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form0_2(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form1_0(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form3_0(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form4_0(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form5_0(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form5_1(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form6_0(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form7_0(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form7_1(*s) && ft_pointlen(*s))
		return (1);
	if (ft_form8_0(*s))
		return (1);
	return (0);
}
