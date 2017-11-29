/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fit_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:47:53 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/28 16:20:40 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"
#include <stdio.h>
#define NB 11

int		main()
{
	char	***tetri;
	int		i;
	int		j;

	tetri = malloc(sizeof(char**) * (NB + 1));
	i = -1;
	while (++i < NB)
	{
		tetri[i] = malloc(sizeof(char *) * 5);
		j = -1;
		while (++j < 4)
			tetri[i][j] = ft_strnew(2);
		tetri[i][j] = 0;
	}
	tetri[NB] = 0;
/*	
	tetri[2][0][0] = 1;
	tetri[2][0][1] = 0;
	tetri[2][1][0] = -1;
	tetri[2][1][1] = 1;
	tetri[2][2][0] = 0;
	tetri[2][2][1] = 1;
	tetri[3][0][0] = 0;
	tetri[3][0][1] = 1;
	tetri[3][1][0] = 0;
	tetri[3][1][1] = 1;
	tetri[3][2][0] = 0;
	tetri[3][2][1] = 1;
	tetri[0][0][0] = 0;
	tetri[0][0][1] = 1;
	tetri[0][1][0] = 1;
	tetri[0][1][1] = -1;
	tetri[0][2][0] = 0;
	tetri[0][2][1] = -1;
	tetri[1][0][0] = 1;
	tetri[1][0][1] = 0;
	tetri[1][1][0] = 1;
	tetri[1][1][1] = 0;
	tetri[1][2][0] = 0;
	tetri[1][2][1] = -1;
*/
	tetri[0][0][0] = 1;
	tetri[0][0][1] = 0;
	tetri[0][1][0] = 0;
	tetri[0][1][1] = -1;
	tetri[0][2][0] = 0;
	tetri[0][2][1] = -1;
	tetri[1][0][0] = 0;
	tetri[1][0][1] = 1;
	tetri[1][1][0] = 1;
	tetri[1][1][1] = -1;
	tetri[1][2][0] = 0;
	tetri[1][2][1] = -1;
	tetri[2][0][0] = 1;
	tetri[2][0][1] = 0;
	tetri[2][1][0] = 1;
	tetri[2][1][1] = 0;
	tetri[2][2][0] = 1;
	tetri[2][2][1] = 0;
	tetri[3][0][0] = 1;
	tetri[3][0][1] = 0;
	tetri[3][1][0] = 1;
	tetri[3][1][1] = 0;
	tetri[3][2][0] = 0;
	tetri[3][2][1] = -1;
	tetri[4][0][0] = 0;
	tetri[4][0][1] = 1;
	tetri[4][1][0] = 1;
	tetri[4][1][1] = 0;
	tetri[4][2][0] = 0;
	tetri[4][2][1] = -1;
	tetri[5][0][0] = 0;
	tetri[5][0][1] = 1;
	tetri[5][1][0] = 0;
	tetri[5][1][1] = 1;
	tetri[5][2][0] = 0;
	tetri[5][2][1] = 1;
	tetri[6][0][0] = 1;
	tetri[6][0][1] = 0;
	tetri[6][1][0] = 1;
	tetri[6][1][1] = 0;
	tetri[6][2][0] = 0;
	tetri[6][2][1] = 1;
	tetri[7][0][0] = 0;
	tetri[7][0][1] = 1;
	tetri[7][1][0] = 1;
	tetri[7][1][1] = 0;
	tetri[7][2][0] = 0;
	tetri[7][2][1] = 1;
	tetri[8][0][0] = 0;
	tetri[8][0][1] = 1;
	tetri[8][1][0] = 1;
	tetri[8][1][1] = 0;
	tetri[8][2][0] = 0;
	tetri[8][2][1] = 1;
	tetri[9][0][0] = 0;
	tetri[9][0][1] = 1;
	tetri[9][1][0] = 0;
	tetri[9][1][1] = 1;
	tetri[9][2][0] = 0;
	tetri[9][2][1] = 1;
	tetri[10][0][0] = 0;
	tetri[10][0][1] = 1;
	tetri[10][1][0] = 0;
	tetri[10][1][1] = 1;
	tetri[10][2][0] = 0;
	tetri[10][2][1] = 1;
/*	tetri[11][0][0] = 1;
	tetri[11][0][1] = 0;
	tetri[11][1][0] = -1;
	tetri[11][1][1] = 1;
	tetri[11][2][0] = 0;
	tetri[11][2][1] = 1;
*/	ft_putendl("Initial tetri:");
	i = -1;
	while (++i < NB)
	{
		ft_putstr("tetri num");
		ft_putendl(ft_itoa(i));
		ft_print_tetri(tetri[i], i, 4);
	}
	printf("press enter to get started\n");
	getchar();
	ft_loop_cgs(tetri);

	return (0);
}
