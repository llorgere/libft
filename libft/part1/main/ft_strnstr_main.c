/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 18:59:30 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/14 19:14:25 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	char	*tstr;
	char	*tto_find;

	i = 0;
	tstr = (char *)str;
	tto_find = (char *)to_find;
	if (tto_find[i] == '\0')
		return (tstr);
	while (tstr[i] != '\0' && i < n)
	{
		j = 0;
		while (tstr[i + j] == tto_find[j] && (i + j) < n)
		{
			j++;
			if (tto_find[j] == '\0')
				return (tstr + i);
		}
		i++;
	}
	return (0);
}

int		main()
{
	char 	*s1 = "MZIRIBMZIRIBMZE123";
	char 	*s2 = "MZIRIBMZE";
	size_t	n;

	n = 9;
	printf("%s\n", ft_strnstr(s1, s2, n));
//	printf("%s\n", strnstr(s1, s2, n));
	return (0);
}
