/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:09:07 by rshor             #+#    #+#             */
/*   Updated: 2021/10/12 19:09:10 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dist, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	j;

	len = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[len] != '\0')
	{
		if (len < dstsize - 1)
		{
			dist[j] = src[len];
			j++;
		}
		len++;
	}
	dist[j] = '\0';
	return (len);
}
