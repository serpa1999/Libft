/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 10:46:26 by rshor             #+#    #+#             */
/*   Updated: 2021/10/24 10:46:36 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lt(char *str, char del)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] != del && (str[i + 1] == del || str[i + 1] == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

char	**ft_split(char const *str, char del)
{
	char	**out_arr;
	int		i;
	int		counter;
	char	*beg;

	i = 0;
	out_arr = (char **)malloc(sizeof(*out_arr) * (lt((char *)str, del) + 1));
	if (out_arr == NULL)
		return (NULL);
	while (*str)
	{
		counter = 0;
		while (*str == del && *str)
			str++;
		beg = (char *)str;
		while (*str != del && *str)
		{
			str++;
			counter++;
		}
		if (*(str - 1) != del)
			out_arr[i++] = ft_substr(beg, 0, counter);
	}
	out_arr[i] = NULL;
	return (out_arr);
}
