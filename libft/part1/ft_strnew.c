#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char	*tab;
	size_t	i;

	tab = 0;
	tab =(char*)malloc(sizeof(char)*((size + 1)));
	if (tab == 0)
		return (0);
	for(i = 0; i < size; i++)
	{
		tab[i] = 0;
	}
	tab[i] = '\0';
	return (tab);
}
