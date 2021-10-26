/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:09:29 by rshor             #+#    #+#             */
/*   Updated: 2021/10/12 19:09:32 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dist, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	j;

	len = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dist[j] != '\0' && j < dstsize)
		j++;
	while (src[len] != '\0' && j + len < dstsize - 1)
	{
		dist[j + len] = src[len];
		len++;
	}
	if (j + len < dstsize)
		dist[j + len] = '\0';
	return (ft_strlen(src) + j);
}
