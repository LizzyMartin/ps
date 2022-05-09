/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:47:51 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:51:24 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_a)
	{
		tmp = (*stack_a)->next;
		if (stack_b)
			(*stack_a)->next = *stack_b;
		else
			(*stack_a)->next = NULL;
		*stack_b = *stack_a;
		*stack_a = tmp;
		write(1, "pb\n", 3);
	}
}
