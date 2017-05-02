/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 14:17:16 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/01 15:17:07 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char 	*dest;

	i = 0;
	len = 0;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	while (s[i + len] != '\0')
		len++;
	while ((s[i + len - 1] == '\n' || s[i + len - 1] == '\t' || s[i + len - 1] == ' ') && len > 0)
		len--;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	j = 0;
	while (j < len)
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
