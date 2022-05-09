/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plan_top_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:27:26 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 16:26:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	add_movements(int rr_len, int ra_len,
	int rb_len, t_movements *movements)
{
	t_list	*tmp;

	while (rr_len--)
	{
		tmp = ft_lstnew(&"rr");
		ft_lstadd_back(&movements->movements, tmp);
	}
	while (ra_len--)
	{
		tmp = ft_lstnew(&"ra");
		ft_lstadd_back(&movements->movements, tmp);
	}
	while (rb_len--)
	{
		tmp = ft_lstnew(&"rb");
		ft_lstadd_back(&movements->movements, tmp);
	}
}

t_movements	*plan_top_top(int source_top, int target_top)
{
	int			rr_len;
	int			ra_len;
	int			rb_len;
	t_movements	*movements;
	t_list		*tmp;

	movements = malloc(sizeof (t_movements));
    movements->movements = NULL;
	if (source_top < target_top)
		rr_len = source_top;
	else
		rr_len = target_top;
	ra_len = source_top - rr_len;
	rb_len = target_top - rr_len;
	add_movements(rr_len, ra_len, rb_len, movements);
	tmp = ft_lstnew(&"pb");
	ft_lstadd_back(&movements->movements, tmp);
	return (movements);
}
