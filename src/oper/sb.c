/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:50:13 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:51:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_list **stack_b, int should_print)
{
	int	temp;

	temp = *((int *)(*stack_b)->content);
	*((int *)(*stack_b)->content) = *((int *)(*stack_b)->next->content);
	*((int *)(*stack_b)->next->content) = temp;
	if (should_print)
		write(1, "sb\n", 3);
}
