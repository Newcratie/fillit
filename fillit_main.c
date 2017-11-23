/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 21:27:35 by jjauzion          #+#    #+#             */
/*   Updated: 2017/11/23 12:38:25 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

#define SIZE 4
#define NB 4

int	main()
{
	char	**cg;
	char	***tetri;
	int		i;
	int		j;

	cg = ft_generate_grid(SIZE);
	tetri = malloc(sizeof(char**) * (NB + 1));
	i = -1;
	while (++i < NB)
	{
		tetri[i] = malloc(sizeof(char *) * (SIZE + 1));
		j = -1;
		while (++j < SIZE)
			tetri[i][j] = ft_strcnew(SIZE, '.');
		tetri[i][j] = 0;
	}
	tetri[0][0][2] = 'A';
	tetri[0][1][0] = 'A';
	tetri[0][1][1] = 'A';
	tetri[0][1][2] = 'A';
	tetri[1][0][0] = 'B';
	tetri[1][0][1] = 'B';
	tetri[1][1][0] = 'B';
	tetri[1][1][1] = 'B';
	tetri[2][0][0] = 'C';
	tetri[2][0][1] = 'C';
	tetri[2][0][2] = 'C';
	tetri[2][1][2] = 'C';
	tetri[3][0][0] = 'D';
	tetri[3][1][0] = 'D';
	tetri[3][2][0] = 'D';
	tetri[3][3][0] = 'D';
	tetri[NB] = 0;
	ft_putendl("Initial tetri :");
	i = -1;
	while (++i < NB)
	{
		ft_putstr("tetri ");
		ft_putendl(ft_itoa(i));
		ft_print_tab(tetri[i]);
	}
	ft_putendl("\n-----------MAGIC-----------");
	ft_fillit(cg, tetri, 0, 0);
	return (0);
}
