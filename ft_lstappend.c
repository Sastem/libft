/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 15:53:59 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/17 16:01:30 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (alst && new)
	{
		temp = *alst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->next = NULL;
	}
}
