/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 07:31:51 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/21 09:15:02 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_form0_1(char *s)
{
	while (*s)
	{
		if (S 0 IS && S 5 IS && S 10 IS && S 15 IS)
			return (1);
		s++;
	}
	return (0);
}

int		ft_form0_2(char *s)
{
	while (*s++)
		if (S 0 IS && S 1 IS && S 5 IS && S 6 IS)
			return (1);
	return (0);
}

int		ft_form1_0(char *s)
{
	while (*s++)
		if (S 0 IS && S 1 IS && S 6 IS && S 11 IS)
			return (1);
	return (0);
}

int		ft_form1_1(char *s)
{
	while (*s++)
		if (S 0 IS && S 1 IS && S 6 IS && S 6 IS)
			return (1);
	return (0);
}

int		ft_form3_0(char *s)
{
	while (*s++)
		if (S 0 IS && S 4 IS && S 5 IS && S 10 IS)
			return (1);
	return (0);
}
