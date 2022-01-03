/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <rshor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 13:22:22 by rshor             #+#    #+#             */
/*   Updated: 2022/01/03 17:43:10 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pointer_to_list;

	pointer_to_list = malloc(sizeof(t_list));
	if (pointer_to_list == NULL)
		return (NULL);
	pointer_to_list->content = content;
	pointer_to_list->next = NULL;
	return (pointer_to_list);
}
