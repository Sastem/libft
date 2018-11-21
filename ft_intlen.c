/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 03:01:02 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/19 03:02:50 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int n)
{
	size_t			len;
	unsigned int	temp;

	len = 0;
	temp = n;
	if (n < 0)
	{
		temp = -n;
		len++;
	}
	while (temp > 0)
	{
		temp = temp / 10;
		len++;
	}
	return (len);
}
