/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 01:35:40 by abbenham          #+#    #+#             */
/*   Updated: 2017/11/21 01:38:39 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *ptr, int old_size, int new_size)
{
	char *new_ptr;

	if (old_size >= new_size)
		return (ptr);
	new_ptr = (char *)malloc(sizeof(char) * new_size);
	if (ptr == NULL)
		return (new_ptr);
	ft_strcpy(new_ptr, ptr);
	free(ptr);
	return (new_ptr);
}
