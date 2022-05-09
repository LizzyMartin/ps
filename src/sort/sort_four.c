/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:29:22 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:29:24 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int	index;
	int	count;

	index = find_index_in_stack(stack_a, 0);
	count = 0;
	while (count < index)
	{
		ra(stack_a, YES);
		count++;
	}
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}
