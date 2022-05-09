/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:36:16 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:07:19 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*aux_old;
	t_list	*aux_new;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew((*f)(lst->content));
	if (!new_list)
		return (NULL);
	aux_new = new_list;
	aux_old = lst->next;
	while (1)
	{
		if (aux_old == NULL)
			break ;
		aux_new->next = ft_lstnew((*f)(aux_old->content));
		if (!aux_new->next)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		aux_new = aux_new->next;
		aux_old = aux_old->next;
	}
	return (new_list);
}
