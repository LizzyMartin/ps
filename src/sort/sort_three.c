/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:07:41 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:26:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_three_aux(t_list **stack_a, int nbs[])
{
	if (nbs[0] > nbs[1] && nbs[1] < nbs[2] && nbs[0] > nbs[2])
		ra(stack_a, YES);
	else if (nbs[0] > nbs[1] && nbs[1] > nbs[2])
	{
		ra(stack_a, YES);
		sa(stack_a, YES);
	}
	else if (nbs[0] < nbs[1] && nbs[1] > nbs[2] && nbs[0] < nbs[2])
	{
		sa(stack_a, YES);
		ra(stack_a, YES);
	}
}

void	sort_three(t_list **stack_a)
{
	t_list		*tmp;
	int			nbs[3];
	int			i;

	i = 0;
	tmp = *stack_a;
	while (tmp)
	{
		nbs[i] = *(int *)tmp->content;
		tmp = tmp->next;
		i++;
	}
	if (nbs[0] > nbs[1] && nbs[1] < nbs[2] && nbs[0] < nbs[2])
		sa(stack_a, YES);
	else if (nbs[0] < nbs[1] && nbs[1] > nbs[2] && nbs[0] > nbs[2])
		rra(stack_a, YES);
	else
		sort_three_aux(stack_a, nbs);
}
