#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char	*tab;

	i = 0;
	while (s[i] != '\0')
		i++;
	tab = (char *)malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		tab[i] = (*f)(s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
