/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 18:13:14 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/14 18:58:54 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	char	*tstr;
	char	*tto_find;

	i = 0;
	tstr = (char *)str;
	tto_find = (char *)to_find;
	if (tto_find[i] == '\0')
		return (tstr);
	while (tstr[i] != '\0')
	{
		j = 0;
		while (tstr[i + j] == tto_find[j])
		{
			j++;
			if (tto_find[j] == '\0')
				return (tstr + i);
		}
		i++;
	}
	return (0);
}
