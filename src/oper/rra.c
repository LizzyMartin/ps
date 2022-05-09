/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:49:07 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:52:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stack_a, int should_print)
{
	t_list	*temp;
	t_list	*first;

	if ((*stack_a)->next == NULL)
		return ;
	temp = *stack_a;
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
	ft_lstadd_front(stack_a, first);
	if (should_print)
		write(1, "rra\n", 4);
}
