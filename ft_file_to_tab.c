/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 02:18:45 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/21 04:51:14 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"
#include <fcntl.h>

char	**ft_file_to_tab(char *path)
{
	int		fd;
	int		i;
	char	*str;
	char	**tab;

	fd = open(path, O_RDWR);
	str = ft_read(fd, str);
	tab = ft_tetrisplit(str, '\n');
	close(fd);
	return (tab);
}
