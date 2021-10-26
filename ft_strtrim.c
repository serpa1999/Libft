/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:38:50 by rshor             #+#    #+#             */
/*   Updated: 2021/10/21 16:38:54 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	int		i;

	i = ft_strlen(s1) - 1;
	beg = 0;
	end = 0;
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		beg++;
	}
	while (i > 0 && ft_strchr(set, s1[i - beg]))
	{
		end++;
		i--;
	}
	return (ft_substr(s1, 0, ft_strlen(s1) - end));
}
