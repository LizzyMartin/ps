/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plan_top_bottom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:27:16 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 02:42:53 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_movements	*plan_top_bottom(int source_top, int target_bottom)
{
	int			ra_len;
	int			rrb_len;
	t_list		*tmp;
	t_movements	*movements;

	ra_len = source_top;
	rrb_len = target_bottom;
	movements = malloc(sizeof(t_movements));
	while (ra_len--)
	{
		tmp = ft_lstnew(&"rra");
		ft_lstadd_back(&movements->movements, tmp);
	}
	while (rrb_len--)
	{
		tmp = ft_lstnew(&"rrb");
		ft_lstadd_back(&movements->movements, tmp);
	}
	tmp = ft_lstnew(&"pb");
	ft_lstadd_back(&movements->movements, tmp);
	return (movements);
}
