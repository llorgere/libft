/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 13:49:27 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/01 14:17:02 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	int		i;
	char	*tab;

	lens1 = 0;
	lens2 = 0;
	i = 0;
	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;
	tab = (char *)malloc(sizeof(*tab) * (lens1 + lens2 + 1));
	if (!tab)
		return (0);
	while (i < lens1 /* && s1[i] != '\0'*/)
	{
		tab[i] = s1[i];
		i++;
	}
	while (i < lens1 + lens2 /*&& s2[i - lens1] != '\0'*/)
	{
		tab[i] = s2[i - lens1];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
