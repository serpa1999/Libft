/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:08:23 by rshor             #+#    #+#             */
/*   Updated: 2021/10/12 19:08:27 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dist, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((unsigned char *)dist == (unsigned char *)src)
		return (dist);
	while (i < n)
	{
		((unsigned char *)dist)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dist);
}
