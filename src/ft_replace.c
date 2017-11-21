#include "libft.h"

char		**ft_replace(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[j])
	{
		i = 0;
		while (tab[j][i])
		{
			if (tab[j][i] == '\n')
				tab[j][i] = ',';
			i++;
		}
		j++;
	}
	return (tab);
}
