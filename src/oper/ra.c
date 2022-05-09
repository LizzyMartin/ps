/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:48:11 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:51:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stack_a, int should_print)
{
	t_list	*temp;
	t_list	*last;

	last = *stack_a;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	while (temp->next)
		temp = temp->next;
	last->next = NULL;
	temp->next = last;
	if (should_print)
		write(1, "ra\n", 3);
}
