/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 03:24:56 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/19 03:25:43 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	i = 0;
	s1 = s;
	while (i < n)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (s1);
}
