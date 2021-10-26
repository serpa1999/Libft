/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:08:42 by rshor             #+#    #+#             */
/*   Updated: 2021/10/12 19:08:45 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dist, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dist > src && src + n > dist)
	{
		while (i < n)
		{
			((char *)dist)[n - i - 1] = ((char *)src)[n - i - 1];
			i++;
		}
	}
	else
		return (ft_memcpy(dist, src, n));
	return (dist);
}
