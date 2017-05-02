/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 17:45:24 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/14 17:59:28 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char *)s;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == (unsigned char)c)
			return (&(tmp[i]));
		i++;
	}
	if (tmp[i] == (unsigned char)c)
		return (&(tmp[i]));
	else
		return (0);
}
