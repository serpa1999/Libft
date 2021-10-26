/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:09:34 by rshor             #+#    #+#             */
/*   Updated: 2021/10/21 13:09:38 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i + 1);
}

static char	*itoa_help(long *nb, char *str)
{
	long	i;

	str[intlen(*nb)] = '\0';
	i = intlen(*nb);
	if (*nb < 0)
	{
		str[0] = '-';
		*nb = -*nb;
	}
	while (*nb >= 0)
	{
		if (*nb >= 10)
		{
			str[i - 1] = *nb % 10 + '0';
			*nb /= 10;
		}
		else if (*nb < 10)
		{
			str[i - 1] = *nb + '0';
			*nb = -1;
		}
		i--;
	}
	return (str);
}

char	*ft_itoa(int nb_classic)
{
	char	*str;
	long	nb;

	nb = nb_classic;
	str = malloc(intlen(nb) + 1);
	if (str == NULL)
		return (NULL);
	return (itoa_help(&nb, str));
}
