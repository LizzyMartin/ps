/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:07:49 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:17:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	get_smallest(t_list *const *stack_a)
{
	int			min;
	t_list		*tmp;

	tmp = *stack_a;
	min = *(int *)tmp->content;
	while (tmp)
	{
		if (min > *(int *)tmp->content)
			min = *(int *)tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

static void	smallest_on_top(t_list **stack_a, t_list **stack_b, int min)
{
	int	index;
	int	count;
	int	size;

	index = find_index_in_stack(stack_a, min);
	count = 0;
	size = ft_lstsize(*stack_a);
	if (index < size / 2)
	{
		while (count < index)
		{
			ra(stack_a, YES);
			count++;
		}
	}
	else
	{
		while (index != size)
		{
			rra(stack_a, YES);
			index++;
		}
	}
	pb(stack_a, stack_b);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	min;

	min = get_smallest(stack_a);
	smallest_on_top(stack_a, stack_b, min);
	min = get_smallest(stack_a);
	smallest_on_top(stack_a, stack_b, min);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
