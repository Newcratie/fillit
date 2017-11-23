/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:21:48 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/23 20:40:58 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_print_list(t_list *lst)
{
	ft_putendl("\nSolution :");
	while (lst)
	{
		ft_print_tab((char **)lst->content);
		ft_putchar('\n');
		lst = lst->next;
	}
}
