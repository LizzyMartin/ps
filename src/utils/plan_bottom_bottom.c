/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plan_bottom_bottom.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:26:55 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 16:11:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	add_movements_2(int rrr_len, int rra_len,
	int rrb_len, t_movements *movements)
{
	t_list	*tmp;

	while (rrr_len--)
	{
		tmp = ft_lstnew(&"rrr");
		ft_lstadd_back(&movements->movements, tmp);
	}
	while (rra_len--)
	{
		tmp = ft_lstnew(&"rra");
		ft_lstadd_back(&movements->movements, tmp);
	}
	while (rrb_len--)
	{
		tmp = ft_lstnew(&"rrb");
		ft_lstadd_back(&movements->movements, tmp);
	}
}

t_movements	*plan_bottom_bottom(int source_bottom, int target_bottom)
{
	int			rrr_len;
	int			rra_len;
	int			rrb_len;
	t_list		*tmp;
	t_movements	*movements;

	if (source_bottom < target_bottom)
		rrr_len = source_bottom;
	else
		rrr_len = target_bottom;
	movements = malloc(sizeof(t_movements));
	rra_len = source_bottom - rrr_len;
	rrb_len = target_bottom - rrr_len;
	add_movements_2(rrr_len, rra_len, rrb_len, movements);
	tmp = ft_lstnew(&"pb");
	ft_lstadd_back(&movements->movements, tmp);
	return (movements);
}
