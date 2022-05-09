/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:28:23 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 02:40:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_target_index(t_list **stack, int value)
{
	int	index;

	if (ft_lstsize(*stack) <= 1)
		return (0);
	index = find_largest_element_less_than(stack, value);
	if (index != -1)
		return (index);
	return (find_smallest_element_great_than(stack, value)
		+ (1 % ft_lstsize(*stack)));
}
