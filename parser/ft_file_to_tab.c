/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 02:18:45 by abbenham          #+#    #+#             */
/*   Updated: 2017/12/02 03:29:27 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"
#include <fcntl.h>

int		ft_toolong(char *s)
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

char	**ft_file_to_tab(char *path)
{
	int	fd;
	int	i;
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
