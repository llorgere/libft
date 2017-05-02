/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 18:59:30 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/14 19:16:34 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
