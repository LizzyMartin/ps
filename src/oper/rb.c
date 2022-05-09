/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:48:23 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:48:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_list **stack_b, int should_print)
{
	t_list	*temp;
	t_list	*last;

	last = *stack_b;
	temp = last;
	if ((*stack_b) == NULL)
		return ;
	*stack_b = (*stack_b)->next;
	while (temp->next)
		temp = temp->next;
	last->next = NULL;
	temp->next = last;
	if (should_print)
		write(1, "rb\n", 3);
}
