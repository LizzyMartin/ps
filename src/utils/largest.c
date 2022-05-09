/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   largest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:26:31 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 15:19:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_max_value(t_list *less)
{
	int	max;

	max = *(int *)less->content;
	while (less)
	{
		if (max < *(int *)less->content)
			max = *(int *)less->content;
		less = less->next;
	}
    ft_lstclear(&less, free);
	return (max);
}

int	find_largest_element_less_than(t_list **stack, int value)
{
	t_list	*tmp;
	t_list	*aux;
	int		nb;
	int		find;
	t_list	*less;

	tmp = *stack;
	less = NULL;
	find = -1;
	while (tmp)
	{
		nb = *(int *)tmp->content;
		if (nb < value)
		{
			find = 0;
			aux = ft_lstnew(tmp->content);
			ft_lstadd_back(&less, aux);
		}
		tmp = tmp->next;
	}
	if (find != -1)
		return (find_index_in_stack(stack, find_max_value(less)));
	return (-1);
}
