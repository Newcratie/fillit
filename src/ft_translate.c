/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:09:00 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/22 11:59:25 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"
#include <stdio.h>

char		**ft_translate(char **tab, size_t size, size_t i)
{
	char	**ret;
	size_t	k;
	size_t	l;
	size_t	m;
	size_t	n;

	if (!(ret = (char **)malloc(sizeof(char *) * size)))
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
	return (ret);
}
