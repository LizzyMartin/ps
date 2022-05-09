/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   sort.c											 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: coder <coder@student.42.fr>				+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/05/09 01:07:35 by coder			 #+#	#+#			 */
/*   Updated: 2022/05/09 01:27:42 by coder			###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_list **stack_a)
{
	t_list	*tmp;
	int		value;

	tmp = *stack_a;
	while (tmp)
	{
		value = *(int *)tmp->content;
		if (tmp->next != NULL)
			if (value > *(int *)tmp->next->content)
				return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	sort_stack(int elements, t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (!is_sorted(stack_a))
		return ;
	else if (elements == 2)
		sort_two(stack_a);
	else if (elements == 3)
		sort_three(stack_a);
	else if (elements == 4)
		sort_four(stack_a, &stack_b);
	else if (elements == 5)
		sort_five(stack_a, &stack_b);
	else
		sort_big(stack_a, &stack_b);
//    ft_lstclear(stack_a, free);
    ft_lstclear(&stack_b, free);
}
