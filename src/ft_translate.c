/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:09:00 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/21 22:16:21 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"
#include <stdio.h>
void	ft_print_tab(char **tab, size_t size)
{
	size_t	i;
	i = -1;
	while (++i < size)
		ft_putendl(tab[i]);
}

void	ft_freetab(char **tab, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
}

char		**ft_translate(char **tab, size_t size, size_t i)
{
	char	**ret;
	size_t	k;
	size_t	l;
	size_t	m;
	size_t	n;

	ret = (char **)malloc(sizeof(char *) * size);
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

int		ft_next_pos(char **tab, size_t size, size_t i)
{
	size_t	count;
	size_t	j;
	char	**ret;

	ret = (char **)malloc(sizeof(char *) * size);
	j = -1;
	while (++j < size)
		ret[j] = ft_strnew(size);
	count = 0;
	i++;
	while (i <= size * size - 1)
	{
		ret = ft_translate(tab, size, i);
		j = 0;
		count = 0;
		while (j <= size * size - 1)
		{
			if (ret[j / size][j % size] != '.')
				count++;
			j++;
		}
		if (count == 4)
		{
			ft_freetab(ret, size);
			return (i);
		}
		i++;
	}
	ft_freetab(ret, size);
	free(ret);
	return (size * size);
}

int		main()
{
	char	**tab;
	size_t	size;
	size_t	i;

	size = 4;
	tab = (char **)malloc(sizeof(char *) * size);
	i = -1;
	while (++i < size)
		tab[i] = ft_strcnew(size, '.');
	tab[0][2] = 'A';
	tab[1][0] = 'A';
	tab[1][1] = 'A';
	tab[1][2] = 'A';
	ft_putendl("Avant :");
	ft_print_tab(tab, size);
	i = ft_next_pos(tab, size, 1);
	ft_putstr("i : ");
	ft_putendl(ft_itoa(i));
	tab = ft_translate(tab, size, i);
	ft_putendl("Apres :");
	ft_print_tab(tab, size);
	return (0);
}
