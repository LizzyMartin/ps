/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:11:48 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:09:57 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = (t_list *)malloc(sizeof(struct s_list));
	if (!n)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}
