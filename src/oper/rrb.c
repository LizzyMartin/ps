/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:49:15 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:50:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list **stack_b, int should_print)
{
	t_list	*temp;
	t_list	*first;

	if (*stack_b == NULL)
		return ;
	temp = *stack_b;
	first = temp;
	while (first->next)
	{
		first = first->next;
	}
	if (temp->next)
	{
		while (temp->next->next)
			temp = temp->next;
	}
	temp->next = NULL;
	ft_lstadd_front(stack_b, first);
	if (should_print)
		write(1, "rrb\n", 4);
}
