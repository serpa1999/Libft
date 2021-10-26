/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:00:40 by rshor             #+#    #+#             */
/*   Updated: 2021/10/12 17:00:47 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoireturn(unsigned int nb, int sign)
{
	if (nb > 2147483648 && sign == -1)
		return (0);
	if (nb > 2147483647 && sign == 1)
		return (-1);
	return (nb * sign);
}

int	ft_atoi(const char *str)
{
	unsigned int	nb;
	int				sign;
	int				i;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (ft_atoireturn(nb, sign));
}
