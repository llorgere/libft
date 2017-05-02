#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void*	ft_memalloc(size_t size)
{
	size_t	*tab;
	size_t	i;

	tab = 0;
	tab =(size_t*)malloc(sizeof(size_t)*(size));
	if (tab == 0)
		return (0);
	for(i = 0; i < size; i++)
	{
		tab[i] = 0;
	}	
	return (tab);
}
