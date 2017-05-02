/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 16:09:42 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/02 17:17:47 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tab;
//	size_t	i;

	tab = NULL;
	if (content == 0)
	{
		if(!(tab = (t_list *)malloc(sizeof(*tab) * 1)))
				return (0);
		(*tab).content = NULL;
		(*tab).content_size = 0;
		(*tab).next = NULL;
	}
	else 
	{
		if(!(tab = (t_list *)malloc(sizeof(*tab) * 1)))
			return (0);
		(*tab).content = ft_strdup(content);
		(*tab).content_size = content_size;
		(*tab).next = NULL;
	}
	return (tab);
}
