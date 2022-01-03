/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <rshor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:36:14 by rshor             #+#    #+#             */
/*   Updated: 2022/01/03 18:38:18 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*temp;
	void	*data;

	lst_new = NULL;
	data = NULL;
	temp = NULL;
	while (lst && f && del)
	{
		data = (*f)(lst->content);
		if (!data)
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		temp = ft_lstnew(data);
		if (!temp)
		{
			if (lst_new)
			{
				ft_lstclear(&lst_new, del);
				return (NULL);
			}
		}
		ft_lstadd_back(&lst_new, temp);
		lst = lst->next;
	}
	return (lst_new);
}
