#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
