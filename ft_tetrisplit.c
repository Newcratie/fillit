#include <stdlib.h>
#include "header.h"

#define I_WHITE (str[i] == c && str[i + 1] == c)
#define J_WHITE (str[j] == c)

static int	ft_strxlen(char const *str, char c)
{
	int		i;

	i = 0;
	while (I_WHITE)
		i++;
	while (str[i] && !(I_WHITE))
		i++;
	return (i);
}

static char	*ft_dupli(char const *str, int len, char c)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = malloc(sizeof(char) * len + 1);
	while (str[i] == c)
		i++;
	while (j < len && !(I_WHITE))
	{
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

static int	ft_ptrlen(char const *str)
{
	int		nb;
	int		i;
	int		j;

	nb = 0;
	i = 0;
	j = -1;
	if (VALIDE)
		nb++;
	while (str[i])
	{
		if ((END) && (NEW))
			nb++;
		i++;
		j++;
	}
	return (nb);
}

char		**ft_tetrisplit(char const *s, char c)
{
	int		i;
	int		k;
	int		tab_len;
	int		wd_len;
	char	**split;

	split = (NULL);
	if (s == NULL)
		return (NULL);
	i = 0;
	k = 0;
	wd_len = 0;
	tab_len = ft_ptrlen(s);
	if (!(split = malloc(sizeof(char*) * tab_len + 1)))
		return (NULL);
	!(*s) ? tab_len = 0 : 0;
	while (k < tab_len)
	{
		i = i + wd_len;
		wd_len = ft_strxlen(&s[i], c);
		split[k] = ft_dupli(&s[i], 19, c);
		k++;
	}
	split[k] = 0;
	return (split);
}
