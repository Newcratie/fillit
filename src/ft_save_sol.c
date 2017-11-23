/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_sol.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:45:41 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/23 20:37:38 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_save_sol(t_list **sol, char **cg, int cgs)
{
	t_list	*new;
	char	**tmp;

	if (!(tmp = ft_translate(cg, cgs, 0)))
	{
		ft_putendl("erreur d'allocation dans save sol");
		return ;
	}
	new = ft_lstlnew((void*)tmp, sizeof(cg));
	ft_lstadd(sol, new);
}
