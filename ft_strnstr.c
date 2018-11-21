/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 01:45:48 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/19 02:40:14 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	res = (char *)str;
	if (*to_find == 0)
		return (res);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && (i + j) < len)
			j++;
		if (to_find[j] == 0)
			return (res + i);
		i++;
	}
	return (NULL);
}
