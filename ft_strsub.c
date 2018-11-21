/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:11:08 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/17 11:21:21 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*fresh;
	unsigned int	i;

	fresh = ft_strnew(len);
	if (!fresh)
		return (NULL);
	i = 0;
	while ((char *)s && i < len)
	{
		fresh[i] = s[start];
		start++;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
