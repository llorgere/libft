#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126 )
		return (1);
	else
		return (0);
}
/*
int	main()
{
	int c = 39;
	int d = 31;
	int e = 32;
	int f = 256;
	int g = -1;
	int h = 45;
	int i = 127;
	int j = 126;

	printf("%d\n", ft_isprint(c));
	printf("%d\n", ft_isprint(d));
	printf("%d\n", ft_isprint(e));
	printf("%d\n", ft_isprint(f));
	printf("%d\n", ft_isprint(g));
	printf("%d\n", ft_isprint(h));
	printf("%d\n", ft_isprint(i));
	printf("%d\n", ft_isprint(j));
	printf("la vraie \n");
	printf("%d\n", isprint(c));
	printf("%d\n", isprint(d));
	printf("%d\n", isprint(e));
	printf("%d\n", isprint(f));
	printf("%d\n", isprint(g));
	printf("%d\n", isprint(h));
	printf("%d\n", isprint(i));
	printf("%d\n", isprint(j));
	return(0);
}*/
