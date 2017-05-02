#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((/*(unsigned char)*/c >= 'a' && /*(unsigned char)*/c <= 'z' )||
(/*(unsigned char)*/c >= 'A' && /*(unsigned char)*/c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	int	i;
	int	j;

	i = 'z';
	j = 685;
	printf("%d\n", i);
	printf("%d\n", j);
	printf("%d\n", ft_isalpha(i));
	printf("%d\n", ft_isalpha(j));
	printf("%d\n", isalpha(i));
	printf("%d\n", isalpha(j));
}*/
