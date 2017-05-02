/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 17:39:31 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/02 16:33:14 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char	*dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	i = 0;
	lend = 0;
	lens = 0;
	while (dest[lend] != '\0')
		lend++;
	while (src[lens] != '\0')
		lens++;
	while (i < (nb - 1 - lend) && src[i] != '\0')
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
//	if (lend > nb
	return (lend + i);
}
/*
int		main()
{
	char 	dest1[45] = "salut les copains";
	const char	*src1 = " et les copines";
	size_t	nb1 = 31;
	char 	dest2[25] = "salut les copains";
	const char	*src2 = " et les copines";
	size_t	nb2 = 1;
	char 	dest3[100] = "salut les copains";
	const char	*src3 = " et les copines";
	size_t	nb3 = 45;
	char 	dest4[52] = "salut";
	const char	*src4 = " et les copines";
	size_t	nb4 = 51;

	printf("ft_strlcat de %d est %zu\n", 1, ft_strlcat(dest1, src1, nb1));
	printf("ft_strlcat de %d est %zu\n", 2, ft_strlcat(dest2, src2, nb2));
	printf("ft_strlcat de %d est %zu\n", 3, ft_strlcat(dest3, src3, nb3));
	printf("ft_strlcat de %d est %zu\n", 4, ft_strlcat(dest4, src4, nb4));
	printf("strlcat de %d est %lu\n", 1, strlcat(dest1, src1, nb1));
	printf("strlcat de %d est %lu\n", 2, strlcat(dest2, src2, nb2));
	printf("strlcat de %d est %lu\n", 3, strlcat(dest3, src3, nb3));
	printf("strlcat de %d est %lu\n", 4, strlcat(dest4, src4, nb4));
	return (0);
}*/
