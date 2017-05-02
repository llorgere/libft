#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}
