/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <rshor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:02:35 by rshor             #+#    #+#             */
/*   Updated: 2022/01/03 12:05:23 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*my_list;

	if (!new)
		return ;
	my_list = ft_lstlast(*lst);
	if (my_list)
		my_list->next = new;
	else
		*lst = new;
}
