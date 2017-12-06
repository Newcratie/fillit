/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 01:40:55 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/21 01:48:35 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

char	*ft_read(int fd, char *str)
{
	char	*tmp;
	int		size;
	int		old_size;

	old_size = 0;
	tmp = 0;
	tmp = (char *)malloc(sizeof(char) * 17);
	str = (char *)malloc(sizeof(char) * 1);
	str[0] = 0;
	while ((size = read(fd, tmp, 16)) > 0)
	{
		size = size + old_size;
		if(!(str = ft_realloc(str, old_size, size + 1)))
			return (NULL);
		ft_strcat(str, tmp);
		old_size = size;
		str[size] = 0;
	}
	return (str);
}
