/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:12:10 by rshor             #+#    #+#             */
/*   Updated: 2021/10/12 19:12:14 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if ((char)c == '\0')
		return (&(((char *)str)[ft_strlen(str)]));
	while (i > 0 && ((char *)str)[i] != (char )c)
	{
		i--;
	}
	if (((char *)str)[i] == (char )c)
		return (&(((char *)str)[i]));
	else
		return (NULL);
}
