/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:11:33 by habovyan          #+#    #+#             */
/*   Updated: 2022/04/19 19:03:49 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;

	if (!lst)
		return (0);
	list = 0;
	while (lst)
	{
		new = ft_lstnew(f((lst -> content)));
		if (!new)
		{
			ft_lstdelone(new, del);
			return (0);
		}
		ft_lstadd_back(&list, new);
		lst = lst -> next;
	}
	return (list);
}
