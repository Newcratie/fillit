/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:09:00 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 18:55:27 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocate a new **tab results of the translation of the char **tab given in 
**	argument by 'i' case with
**	column = i \ size
**	line = i % size
**	The original tab isn't modify
*/

#include "header.h"
#include "libft.h"

char		**ft_translate(char **tab, size_t size, size_t i)
{
	char	**ret;
	size_t	k;
	size_t	l;
	size_t	m;
	size_t	n;

	if (!(ret = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	k = 0;
	while (k < size)
	{
		ret[k] = ft_strcnew(size, '.');
		k++;
	}
	k = 0;
	m = i % size;
	while (m < size)
	{
		l = 0;
		n = i / size;
		while (n < size)
		{
			ret[n][m] = tab[l][k];
			l++;
			n++;
		}
		k++;
		m++;
	}
	ret[size] = 0;
	return (ret);
}
