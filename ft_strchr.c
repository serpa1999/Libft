/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:11:50 by rshor             #+#    #+#             */
/*   Updated: 2021/10/12 19:11:53 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (((char *)str)[i] != '\0' && ((char *)str)[i] != (unsigned char )c)
	{
		i++;
	}
	if (((char *)str)[i] == (unsigned char )c)
		return (&(((char *)str)[i]));
	else
		return (0);
}
