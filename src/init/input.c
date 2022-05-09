/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:43:05 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 15:57:16 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	get_array(char *const *argv, int size,
	int *input_array, int *ordered_array)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!check_input(argv[i + 1]))
		{
			input_array[i] = ft_atoi(argv[i + 1]);
			ordered_array[i] = ft_atoi(argv[i + 1]);
		}
		else
		{
			handle_error();
		}
		i++;
	}
}

static void	check_for_duplicates(int *array, int size)
{
	int	i;

	i = -1;
	while (i++ < size - 1)
	{
		if (array[i] == array[i + 1])
		{
			handle_error();
		}
	}
}

static int	find_index(int *array, int size, int target)
{
	int	i;

	i = 0;
	while ((i < size) && (array[i] != target))
		i++;
	if (i < size)
		return (i);
	return (-1);
}

int	*get_normalized_input(int argc, char **argv)
{
	int	i;
	int	size;
	int	*input_array;
	int	*ordered_array;
	int	*normalized_input;

	i = 0;
	size = argc - 1;
	input_array = (int *)ft_calloc(argc, sizeof(int));
	ordered_array = (int *)ft_calloc(argc, sizeof(int));
	get_array(argv, size, input_array, ordered_array);
	heapsort(ordered_array, size);
	check_for_duplicates(ordered_array, size);
	normalized_input = (int *)ft_calloc(size, sizeof(int));
	while (i < size)
	{
		normalized_input[i] = find_index(ordered_array, size, input_array[i]);
		i++;
	}
    free((void *)input_array);
    free((void *)ordered_array);
	return (normalized_input);
}
