/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 19:17:11 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/01 12:24:33 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	int		val;
//	char	*ts1;
//	char	*ts2;

	i = 0;
	val = -1;
//	ts1 = (char *)s1;
//	ts2 = (char *)s2;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	while (s1[i] == s2[i] && s2[i] != '\0' && s1[i] != '\0')
		i++;
	val = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (val);
}
/*
int		main()
{
	char	*s1 = "\0";
	char	*s2 = "\200";

	printf("%d\n", ft_strcmp(s1, s2));
//	printf("%d\n", strcmp(s1, s2));
}*/
