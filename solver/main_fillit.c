/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fillit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 19:54:04 by jjauzion          #+#    #+#             */
/*   Updated: 2017/12/02 17:03:04 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		main(int argc, char **argv)
{
	char	**tab;
	char	***tetri;

	if (argc != 2)
	{
		ft_putstr("usage: ");
		ft_putstr(argv[0]);
		ft_putendl(" <filename>");
		return (0);
	}
	if (!(tab = ft_file_to_tab(argv[1])))
	{
		ft_putendl("error");
		return (0);
	}
	if (!(tetri = ft_parser(tab)))
	{
		ft_putendl("error");
		return (0);
	}
	ft_loop_cgs(tetri);
	return (0);
}
