/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:42:21 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:43:41 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_input(char *input)
{
	int	i;
	int	error;

	i = 0;
	error = NO;
	while (input[i])
	{
		if ((!ft_isdigit(input[i]) && input[i] != '-')
			|| input[i + 1] == '-')
			error = YES;
		i++;
	}
	if (ft_strlen(input) == 1 && input[0] == '-')
		error = YES;
	if (ft_strlen(input) > 1 && input[0] == '0')
		error = YES;
	if (ft_atoi(input) > INT_MAX || ft_atoi(input) < INT_MIN)
		error = YES;
	return (error);
}
