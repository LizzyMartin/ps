/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:35:51 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:41:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <limits.h>

# define YES 1
# define NO 0

typedef struct s_coordinates
{
	int	source_value;
	int	source_len;
	int	source_top;
	int	source_bottom;
	int	target_value;
	int	target_len;
	int	target_top;
	int	target_bottom;
}				t_coordinates;

typedef struct s_movements
{
	t_list	*movements;
}				t_movements;

void				print_stack(t_list **stack);

void				heapsort(int arr[], int n);
int					*get_normalized_input(int argc, char **argv);

int					check_input(char *input);
void				put_array_on_stack(int *array, int size, t_list **stack);

void				handle_error(void);

void				sort_stack(int elements, t_list **stack_a);
void				sort_two(t_list **stack_a);
void				sort_three(t_list **stack_a);
void				sort_four(t_list **stack_a, t_list **stack_b);
void				sort_five(t_list **stack_a, t_list **stack_b);
void				sort_big(t_list **stack_a, t_list **stack_b);

void				pa(t_list **stack_a, t_list **stack_b);
void				pb(t_list **stack_a, t_list **stack_b);
void				ra(t_list **stack_a, int should_print);
void				rb(t_list **stack_b, int should_print);
void				rr(t_list **stack_a, t_list **stack_b);
void				sa(t_list **stack_a, int should_print);
void				sb(t_list **stack_b, int should_print);
void				ss(t_list **stack_a, t_list **stack_b);
void				rra(t_list **stack_a, int should_print);
void				rrb(t_list **stack_b, int should_print);
void				rrr(t_list **stack_a, t_list **stack_b);

int					find_smallest_element_great_than(t_list **stack, int value);
int					find_largest_element_less_than(t_list **stack, int value);
int					find_target_index(t_list **stack, int value);
t_coordinates		*get_elements_coordinates(t_list **source,
						t_list **target, int index);
t_list				*get_all_coordinates(t_list **stack_a, t_list **stack_b);
void				move_by_cmd(t_list **stack_a, t_list **stack_b, char *cmd);

t_movements			*plan_bottom_bottom(int source_bottom, int target_bottom);
t_movements			*plan_top_bottom(int source_top, int target_bottom);
t_movements			*plan_bottom_top(int source_bottom, int target_top);
t_movements			*plan_top_top(int source_top, int target_top);

void				push_all_b_elements_to_a(t_list **stack_a,
						t_list **stack_b);
void				fix_middle(t_list **stack_b);
int					find_index_in_stack(t_list **stack, int target);

t_list				*get_candidates(t_list *coordinates);
t_list				*get_best_candidate(t_list *candidates);

#endif
