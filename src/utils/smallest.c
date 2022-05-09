/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:28:30 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 15:21:17 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_min_value(t_list *less)
{
	int	min;

	min = *(int *)less->content;
	while (less)
	{
		if (min > *(int *)less->content)
			min = *(int *)less->content;
		less = less->next;
	}
	return (min);
}

int	find_smallest_element_great_than(t_list **stack, int value)
{
	t_list		*tmp;
	t_list		*aux;
	int			nb;
	t_list		*great;

	tmp = *stack;
	great = NULL;
	while (tmp)
	{
		nb = *(int *)tmp->content;
		if (nb > value)
		{
			aux = ft_lstnew(tmp->content);
			ft_lstadd_back(&great, aux);
		}
		tmp = tmp->next;
	}
	return (find_index_in_stack(stack, find_min_value(great)));
}
