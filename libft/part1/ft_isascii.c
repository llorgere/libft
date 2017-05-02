#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

/*
int	main()
{
	int c = 'd';
	int d = 12;
	int e = 123;
	int f = -1;
	int g = -126;
	int h = 127;
	int i = -0;
	int j = 157;
	int k = 156;
	int l = 45;
	int m = -2147483648;
	int n = 2147483647;

	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(d));
	printf("%d\n", ft_isascii(e));
	printf("%d\n", ft_isascii(f));
	printf("%d\n", ft_isascii(g));
	printf("%d\n", ft_isascii(h));
	printf("%d\n", ft_isascii(i));
	printf("%d\n", ft_isascii(j));
	printf("%d\n", ft_isascii(k));
	printf("%d\n", ft_isascii(l));
	printf("%d\n", ft_isascii(m));
	printf("%d\n", ft_isascii(n));
	printf("la vrai mtnt\n");
	printf("%d\n", isascii(c));
	printf("%d\n", isascii(d));
	printf("%d\n", isascii(e));
	printf("%d\n", isascii(f));
	printf("%d\n", isascii(g));
	printf("%d\n", isascii(h));
	printf("%d\n", isascii(i));
	printf("%d\n", isascii(j));
	printf("%d\n", isascii(k));
	printf("%d\n", isascii(l));
	printf("%d\n", isascii(m));
	printf("%d\n", isascii(n));
	return(0);
}*/
