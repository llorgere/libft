#include "libft.h"
#include <stdio.h>
#include <ctype.h>

//int     ft_isalpha(int c);
//int     ft_isdigit(int c);

int	ft_isalnum(int c)
{
//	if ((c >= 'a' && c <= 'z' )||(c >= 'A' && c <= 'Z')||(c >= '0' && c <= '9'))
//	if (ft_isalpha(c) == 1024 || ft_isdigit(c) == 2048)
	if ((c >= 'a' && c <= 'z' )||(c >= 'A' && c <= 'Z')||(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*
int	main()
{
	int c = 'Z';
	int d = '9';
	int e = 'A';
	int f = 'z';
	int g = '0';
	int h = 'a';
	int i = 47;
	int j = 58;
	int k = 64;
	int l = 91;
	int m = 96;
	int n = 123;


	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(d));
	printf("%d\n", ft_isalnum(e));
	printf("%d\n", ft_isalnum(f));
	printf("%d\n", ft_isalnum(g));
	printf("%d\n", ft_isalnum(h));
	printf("%d\n", ft_isalnum(i));
	printf("%d\n", ft_isalnum(j));
	printf("%d\n", ft_isalnum(k));
	printf("%d\n", ft_isalnum(l));
	printf("%d\n", ft_isalnum(m));
	printf("%d\n", ft_isalnum(n));
	printf("la vraie \n");
	printf("%d\n", isalnum(c));
	printf("%d\n", isalnum(d));
	printf("%d\n", isalnum(e));
	printf("%d\n", isalnum(f));
	printf("%d\n", isalnum(g));
	printf("%d\n", isalnum(h));
	printf("%d\n", isalnum(i));
	printf("%d\n", isalnum(j));
	printf("%d\n", isalnum(k));
	printf("%d\n", isalnum(l));
	printf("%d\n", isalnum(m));
	printf("%d\n", isalnum(n));
	return(0);
}*/
