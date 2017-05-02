#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (/*(unsigned char)*/c >= 'A' && /*(unsigned char)*/c <= 'Z' )
		return (c + 32);
	else
		return (c);
}
/*
int	main()
{
	int c = 500;
	int d = 'Z';

	printf("%d\n", ft_tolower(c));
	printf("%d\n", ft_tolower(d));
	printf("%d\n", tolower(d));
	printf("%d\n", tolower(c));
	return(0);
}*/
