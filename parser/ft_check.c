/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:50:25 by abbenham          #+#    #+#             */
/*   Updated: 2017/12/06 10:51:16 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_c_count(char *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
		if (s[i++] == c)
			j++;
	return (j);
}

int		ft_nl(char *s)
{
	if (s[4] == '\n' && s[9] == '\n' && s[14] == '\n')
		return (1);
	return (0);
}

int		ft_surround(char *s)
{
	int i;
	int good;

	i = 0;
	good = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '#')
		{
			if (s[i + 1] == '#')
				good++;
			if (s[i - 1] == '#')
				good++;
			if (s[i + 5] == '#')
				good++;
			if (s[i - 5] == '#')
				good++;
			if (good >= 6)
				return (1);
		}
		i++;
	}
	return (0);
}

int		ft_valide(char *s)
{
	if (ft_c_count(s, '.') == 12 && ft_nl(s) == 1 && ft_strlen(s) == 19
			&& ft_surround(s))
		return (1);
	else if (ft_c_count(s, '.') == 16 && ft_strlen(s) == 19)
		return (0);
	return (-1);
}
