/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:13:45 by rshor             #+#    #+#             */
/*   Updated: 2021/10/12 19:13:48 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	if (len > ft_strlen(h))
		len = ft_strlen(h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		if (h[i] == n[j])
		{
			while (i + j < len && (h[i + j] == n[j]))
			{
				j++;
				if (n[j] == '\0')
					return (&(((char *)h)[i]));
			}
		}
		i++;
	}
	return (NULL);
}
