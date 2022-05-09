/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:34:40 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 15:22:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	int		*input;

	stack_a = NULL;
	if (argc == 1)
		return (0);
	input = get_normalized_input(argc, argv);
	put_array_on_stack(input, argc - 1, &stack_a);
	sort_stack(argc - 1, &stack_a);
	return (0);
}
