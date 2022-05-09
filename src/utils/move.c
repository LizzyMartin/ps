/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:27:01 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 02:27:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_by_cmd(t_list **stack_a, t_list **stack_b, char *cmd)
{
	if (!ft_strncmp("pa", cmd, 2))
		pa(stack_a, stack_b);
	else if (!ft_strncmp("pb", cmd, 2))
		pb(stack_a, stack_b);
	else if (!ft_strncmp("sa", cmd, 2))
		sa(stack_a, YES);
	else if (!ft_strncmp("sb", cmd, 2))
		sb(stack_b, YES);
	else if (!ft_strncmp("ss", cmd, 2))
		ss(stack_a, stack_b);
	else if (!ft_strncmp("ra", cmd, 2))
		ra(stack_a, YES);
	else if (!ft_strncmp("rb", cmd, 2))
		rb(stack_b, YES);
	else if (!ft_strncmp("rr", cmd, 3))
		rr(stack_a, stack_b);
	else if (!ft_strncmp("rra", cmd, 3))
		rra(stack_a, YES);
	else if (!ft_strncmp("rrb", cmd, 3))
		rrb(stack_b, YES);
	else if (!ft_strncmp("rrr", cmd, 3))
		rrr(stack_a, stack_b);
}
