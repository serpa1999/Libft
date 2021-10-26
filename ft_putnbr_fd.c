/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:16:32 by rshor             #+#    #+#             */
/*   Updated: 2021/10/17 17:16:37 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	symbol;
	int		counter;

	if (nb == -2147483648 )
		write(fd, "-2147483648", 11);
	else if (nb < 0 )
	{
		write(fd, "-", 1);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb < 10)
	{
		symbol = nb + '0';
		write(fd, &symbol, 1);
	}
	else
	{
		counter = nb / 10;
		ft_putnbr_fd(counter, fd);
		symbol = (nb % 10) + '0';
		write(fd, &symbol, 1);
	}
}
