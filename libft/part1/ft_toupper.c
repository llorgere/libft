#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (/*(unsigned char)*/c >= 'a' && /*(unsigned char)*/c <= 'z' )
		return (c - 32);
	else
		return (c);
}
/*
int	main()
{
	int c = 'a';
	int d = 'z';
	int e = 'Z';
	int f = 64;
	int g = 91;
	int h = 96;
	int i = 123;
	int j = 'A';

	printf("%d\n", ft_toupper(c));
	printf("%d\n", ft_toupper(d));
	printf("%d\n", ft_toupper(e));
	printf("%d\n", ft_toupper(f));
	printf("%d\n", ft_toupper(g));
	printf("%d\n", ft_toupper(h));
	printf("%d\n", ft_toupper(i));
	printf("%d\n", ft_toupper(j));
	printf("%d\n", toupper(c));
	printf("%d\n", toupper(d));
	printf("%d\n", toupper(e));
	printf("%d\n", toupper(f));
	printf("%d\n", toupper(g));
	printf("%d\n", toupper(h));
	printf("%d\n", toupper(i));
	printf("%d\n", toupper(j));
	return(0);
}*/
