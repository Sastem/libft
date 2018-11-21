/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssahai- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 19:34:02 by ssahai-           #+#    #+#             */
/*   Updated: 2018/11/17 19:34:08 by ssahai-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int len;
	int m;
	int swap;

	len = ft_strlen(str);
	i = 0;
	j = len - 1;
	m = len / 2;
	while (i <= m && j >= m)
	{
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		j--;
		i++;
	}
	return (str);
}
