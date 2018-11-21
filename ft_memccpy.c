/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 03:16:14 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/19 03:17:05 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s1;
	unsigned char		*s2;
	unsigned char		character;

	character = (unsigned char)c;
	s1 = (const unsigned char *)src;
	s2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		s2[i] = s1[i];
		if (s1[i] == character)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
