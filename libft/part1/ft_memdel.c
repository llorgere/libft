#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
