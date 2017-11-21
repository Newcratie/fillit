#include "libft.h"
#include "header.h"
#include <fcntl.h>

int		main(int ac, char **av)
{
	(void)ac;
	int		i;
	char	**tab;

	tab = ft_file_to_tab(av[1]);
	while (tab[i])
	{
		ft_putendl(tab[i++]);
		ft_putchar('\n');
	}
	tab = ft_replace(tab);
	i = 0;
	while (tab[i])
		ft_putendl(tab[i++]);
	ft_putnbr(ft_error_checker(tab));
	return (0);
}
