/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 03:10:36 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/19 03:11:10 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;

	temp = NULL;
	if (lst)
	{
		temp = (*f)(lst);
		if (!temp)
			return (NULL);
		if (lst->next)
			temp->next = ft_lstmap(lst->next, f);
	}
	return (temp);
}
