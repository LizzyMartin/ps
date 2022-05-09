/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:15:39 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 02:15:41 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_index_in_stack(t_list **stack, int target)
{
	t_list	*tmp;
	int		index;

	tmp = *stack;
	index = 0;
	while (tmp)
	{
		if (target == *(int *)tmp->content)
			return (index);
		tmp = tmp->next;
		index ++;
	}
	return (0);
}
