/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 03:40:49 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/19 03:41:36 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*fresh;
	unsigned int	i;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	if (!s || !f)
		return (NULL);
	fresh = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!fresh)
		return (NULL);
	fresh[len] = '\0';
	while (s[i] != '\0')
	{
		fresh[i] = (*f)(i, s[i]);
		i++;
	}
	return (fresh);
}
