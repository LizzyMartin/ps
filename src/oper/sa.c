/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:49:55 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:50:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **stack_a, int should_print)
{
	int	temp;

	temp = *((int *)(*stack_a)->content);
	*((int *)(*stack_a)->content) = *((int *)(*stack_a)->next->content);
	*((int *)(*stack_a)->next->content) = temp;
	if (should_print)
		write(1, "sa\n", 3);
}
