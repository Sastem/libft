/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 01:20:01 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/19 01:21:18 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	ptr = NULL;
	if (s)
	{
		start = 0;
		while (s[start] && (s[start] == ' ' ||
					s[start] == '\n' || s[start] == '\t'))
			start++;
		end = ft_strlen((char *)s) - 1;
		while (end > start && (s[end] == ' ' ||
					s[end] == '\n' || s[end] == '\t'))
			end--;
		ptr = ft_strsub(s, start, end - start + 1);
		if (!ptr)
			return (NULL);
	}
	return (ptr);
}
