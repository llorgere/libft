/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 18:23:23 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/02 18:54:13 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*tab;

//	tmp = *(**alst).next;
	tab = *alst;
	while (tab)
	{	
		tmp = (*tab).next;
		del((*tab).content, (*tab).content_size);
		free(tab);
		tab = tmp;
	}
	*alst = NULL;
}
