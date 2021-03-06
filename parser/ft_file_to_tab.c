/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 02:18:45 by abbenham          #+#    #+#             */
/*   Updated: 2017/12/06 10:48:20 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"
#include <fcntl.h>

int			ft_toolong(char *s)
{
	int		i;

	i = 0;
	while (*s)
	{
		if (*s == '\n' && s[1] == '\n')
			i = 0;
		if (i > 21)
			return (-1);
		i++;
		s++;
	}
	return (1);
}

char		**ft_file_to_tab(char *path)
{
	int		fd;
	int		i;
	char	*str;
	char	**tab;

	i = -1;
	str = NULL;
	fd = open(path, O_RDWR);
	str = ft_read(fd, str);
	while (str[++i + 2])
		if (str[i] == '\n' && str[i + 1] == '\n' && str[i + 2] == '\n')
			return (NULL);
	if (!(tab = ft_tetrisplit(str, '\n')) || -1 == ft_toolong(str))
		return (NULL);
	close(fd);
	if ('\n' == str[ft_strlen(str) - 2])
		return (NULL);
	free(str);
	str = NULL;
	return (tab);
}

int			ft_counttet(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if (1 == ft_valide(tab[i]))
			j++;
		else if (-1 == ft_valide(tab[i]))
			return (-1);
		i++;
	}
	return (j);
}

char		***ft_tetmalloc(int i)
{
	int		j;
	int		k;
	char	***tetri;

	j = 0;
	k = 0;
	if (!(tetri = (char ***)malloc(sizeof(char **) * i + 1)))
		return (NULL);
	while (j < i)
	{
		if (!(tetri[j] = (char **)malloc(sizeof(char *) * 5)))
			return (NULL);
		k = 0;
		while (k < 3)
			if (!(tetri[j][k++] = (char *)malloc(sizeof(char ) * 5)))
				return (NULL);
		j++;
	}
	return (tetri);
}
