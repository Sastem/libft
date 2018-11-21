/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 03:21:01 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/19 03:21:39 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	i = 0;
	if (s2 < s1)
	{
		while (i < n)
		{
			s2[i] = s1[i];
			i++;
		}
	}
	else
	{
		while (n != 0)
		{
			s2[n - 1] = s1[n - 1];
			n--;
		}
	}
	return (dest);
}
