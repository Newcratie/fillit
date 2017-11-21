/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 09:42:18 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/21 10:28:44 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.h"

int		ft_form7_0(char *s)
{
	while (*s++)
		if (S 0 IS && S 3 IS && S 4 IS && S 5 IS)
			return (1);
	return (0);
}

int		ft_form7_1(char *s)
{
	while (*s++)
		if (S 0 IS && S 1 IS && S 2 IS && S 5 IS)
			return (1);
	return (0);
}

int		ft_form8_0(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	if (i == 16 && s[4] == '\n' && s[9] == '\n' && s[14] == '\n')
		return (1);
	return(0);
}

int		ft_form8_1(char *s)
{
	while (*s++)
		if (S 0 IS && S 5 IS && S 10 IS && S 11 IS)
			return (1);
	return (0);
}

int		ft_form8_2(char *s)
{
	while (*s++)
		if (S 0 IS && S 5 IS && S 10 IS && S 11 IS)
			return (1);
	return (0);
}
