/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_to_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:41:43 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:41:44 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_array_on_stack(int *array, int size, t_list **stack)
{
	int		i;
	t_list	*tmp;

	i = 0;
	while (i < size)
	{
		tmp = ft_lstnew((void *)&array[i]);
		ft_lstadd_back(stack, tmp);
		i++;
	}
}
