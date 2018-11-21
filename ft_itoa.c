/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 02:59:05 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/19 03:04:41 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	temp;

	temp = n;
	len = ft_intlen(n);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		str[0] = '-';
		temp = -n;
	}
	while (temp > 0)
	{
		str[len--] = 48 + (temp % 10);
		temp = temp / 10;
	}
	return (str);
}
