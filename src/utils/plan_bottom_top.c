/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plan_bottom_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:27:20 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 02:53:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_movements	*plan_bottom_top(int source_bottom, int target_top)
{
	int			rra_len;
	int			rb_len;
	t_movements	*movements;
	t_list		*tmp;

	rra_len = source_bottom + 1;
	rb_len = target_top;
	movements = malloc(sizeof(t_movements));
	while (rra_len-- && rra_len > 0)
	{
		tmp = ft_lstnew(&"rra");
		ft_lstadd_back(&movements->movements, tmp);
	}
	while (rb_len-- && rb_len > 0)
	{
		tmp = ft_lstnew(&"rrb");
		ft_lstadd_back(&movements->movements, tmp);
	}
	tmp = ft_lstnew(&"pb");
	ft_lstadd_back(&movements->movements, tmp);
	return (movements);
}
