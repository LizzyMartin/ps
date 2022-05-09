/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_middle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:24:43 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 02:25:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fix_middle(t_list **stack_b)
{
	int	middle;
	int	index;
	int	size;
	int	goal;

	size = ft_lstsize(*stack_b);
	middle = size / 2;
	index = find_index_in_stack(stack_b, 0);
	if (index < middle)
	{
		goal = index + 1;
		while (goal--)
			rb(stack_b, YES);
	}
	else
	{
		goal = size - index - 1;
		while (goal--)
			rrb(stack_b, YES);
	}
}
