#include "libft.h"
#include <stdio.h> 
#include "header.h"
#include <fcntl.h>

int		main(int ac, char **av)
{
	(void)ac;
	char	**tab;
	char 	***tet;
	int		i = 0;
	int		j = 0;

	tab = ft_file_to_tab(av[1]);
	tet = ft_parser(tab);
	ft_putendl("------Print ***tet------");
	while (tet[i])
	{
		j = 0;
		while (tet[i][j])
			ft_putendl(tet[i][j++]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
