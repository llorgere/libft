#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
