/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 15:30:57 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/01 17:22:09 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*tab;
	int		i;
	int		j;

	i = n;
	j = 0;
	if (n == -2147483648)
	{
		if (!(tab = (char *)malloc(sizeof(*tab) * (12))))
			return (0);
		tab[0] = '-';
		tab[11] = '\0';
		tab[10] = '8';
		n = -(n / 10);
		j = 10;
		while (n > 0)
		{
			tab[j - 1] = (n % 10) + 48;
			n = n / 10;
			j--;
		}
		return (tab);
	}
	else if (i <= 0)
	{
		i = -i;
		j++;
	}
	while (i > 0)
	{
		i = i / 10;
		j++;
	}
	if (!(tab = (char *)malloc(sizeof(*tab) * (j + 1))))
		return (0);
	tab[j] = '\0';
	if (n == 0)
		tab[0] = 48;
	if (n < 0)
	{
		tab[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		tab[j - 1] = (n % 10) + 48;
		n = n / 10;
		j--;
	}
	return (tab);
}
/*
   int		main()
   {
   int		i = 0;
   int		j = 9;
   int		k = 10;
   int		l = 1894463;
   int		m = 2147483647;
   int		n = -0;
   int		o = -9;
   int		p = -10;
   int		q = -19846516;
   int		r = -2147483648;

   printf("%s\n", ft_itoa(i));
   printf("%s\n", ft_itoa(j));
   printf("%s\n", ft_itoa(k));
   printf("%s\n", ft_itoa(l));
   printf("%s\n", ft_itoa(m));
   printf("%s\n", ft_itoa(n));
   printf("%s\n", ft_itoa(o));
   printf("%s\n", ft_itoa(p));
   printf("%s\n", ft_itoa(q));
   printf("%s\n", ft_itoa(r));

   return (0);
   }*/
