/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 14:53:09 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/14 18:46:38 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t		i;
	int		lend;

	i = 0;
	lend = 0;
	while (dest[lend] != '\0')
		lend++;
	while (src[i] && i < nb)
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (dest);
}

int		main()
{
	char	dest[20] = "AB";
	char	*src = "CDEFGHI";
	size_t	n;

	n = 10;
	printf("%s\n", ft_strncat(dest, src, n));
//	printf("%s\n", strncat(dest, src, n));
	return (0);
}
