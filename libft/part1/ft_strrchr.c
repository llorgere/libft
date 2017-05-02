/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 17:59:39 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/14 18:12:56 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	i = 0;
	j = 0;
	k = 0;
	tmp = (char *)s;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == (unsigned char)c)
		{
			j = i;
			k = 1;
		}
		i++;
	}
	if (tmp[i] == (unsigned char)c)
		return (&(tmp[i]));
	else if (k == 1)
		return (&(tmp[j]));
	else
		return (0);
}
