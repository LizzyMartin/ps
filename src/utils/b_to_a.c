/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:13:24 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 02:13:25 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_all_b_elements_to_a(t_list **stack_a, t_list **stack_b)
{
	int	index;
	int	size;

	index = 0;
	size = ft_lstsize((*stack_b));
	while (index < size)
	{
		pa(stack_a, stack_b);
		index++;
	}
}
