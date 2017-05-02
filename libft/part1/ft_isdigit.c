#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9' ))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	int c = 78978974;
	int d = '0';

	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(d));
	printf("%d\n", isdigit(c));
	printf("%d\n", isdigit(d)); 
	return(0);
}*/
