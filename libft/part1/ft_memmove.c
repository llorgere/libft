/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:26:40 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/14 16:36:57 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tsrc;
	unsigned char	*tdest;
	size_t			i;

	i = 0;
	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	if (src < dest)
	{
		while (0 < n)
		{
			tdest[n - 1] = tsrc[n - 1];
			n--;
		}
	}
	else 
	{
		while (i < n)
		{
			tdest[i] = tsrc[i];
			i++;
		}
	}
	return (tdest);
}
