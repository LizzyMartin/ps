/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinates.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:13:41 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 02:55:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_value_in_stack_by_index(t_list **stack, int index)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = *stack;
	while (count < index)
	{
		if (tmp->next != NULL)
			tmp = tmp->next;
		count++;
	}
	return (*(int *)tmp->content);
}

t_coordinates	*get_elements_coordinates(t_list **source,
	t_list **target, int index)
{
	t_coordinates	*coordinates;

	coordinates = malloc(sizeof(t_coordinates));
	coordinates->source_value = find_value_in_stack_by_index(source, index);
	coordinates->source_len = ft_lstsize(*source);
	coordinates->source_top = index;
	coordinates->source_bottom = coordinates->source_len - index - 1;
	coordinates->target_value = 0;
	coordinates->target_len = ft_lstsize(*target);
	coordinates->target_top = find_target_index(target,
			find_value_in_stack_by_index(source, index));
	coordinates->target_bottom = coordinates->target_len
		- coordinates->target_top;
	return (coordinates);
}

t_list	*get_all_coordinates(t_list **stack_a, t_list **stack_b)
{
	int				index;
	int				size;
	t_coordinates	*coordinate;
	t_list			*tmp;
	t_list			*coordinates;

	coordinates = NULL;
	index = 0;
	size = ft_lstsize(*stack_a);
	while (index < size)
	{
		coordinate = get_elements_coordinates(stack_a, stack_b, index);
		tmp = ft_lstnew((void *)coordinate);
		ft_lstadd_back(&coordinates, tmp);
		index++;
	}
	return (coordinates);
}
