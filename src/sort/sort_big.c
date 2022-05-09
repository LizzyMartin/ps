/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:29:15 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 16:26:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void move_best_candidate(t_list **stack_a, t_list **stack_b, t_list *best_candidate);

void	get_candidates_list_aux(t_list **candidates, t_list *tmp,
                                t_coordinates *c, int i)
{
	t_movements	*aux;

	if (i == 2)
	{
		aux = plan_top_bottom((*c).source_top, (*c).target_bottom);
		tmp = ft_lstnew(aux);
		ft_lstadd_back(candidates, tmp);
	}
	else if (i == 3)
	{
		aux = plan_bottom_top((*c).source_bottom, (*c).target_top);
		tmp = ft_lstnew(aux);
		ft_lstadd_back(candidates, tmp);
	}
}

t_list	*get_candidates_list(t_list **candidates, t_coordinates *c)
{
	int				i;
    t_list          *tmp;
	t_movements		*aux;

	i = 0;
	while (i < 1)
	{
		if (i == 0)
		{
			aux = plan_top_top((*c).source_top, (*c).target_top);
			tmp = ft_lstnew(aux);
			ft_lstadd_back(candidates, tmp);
		}
		else if (i == 1)
		{
			aux = plan_bottom_bottom((*c).source_bottom, (*c).target_bottom);
			tmp = ft_lstnew(aux);
			ft_lstadd_back(candidates, tmp);
		}
		else
			get_candidates_list_aux(candidates, tmp, c, i);
		i++;
	}
	return (*candidates);
}

t_list	*get_best_candidate(t_list *candidates)
{
	int		min;
	int		s;
	t_list	*tmp;
	t_list	*best_candidate;

	best_candidate = NULL;
	min = 1000;
	while (candidates)
	{
		tmp = ((t_movements *)candidates->content)->movements;
		s = ft_lstsize(tmp);
		if (min > s)
		{
			min = s;
			best_candidate = tmp;
		}
		candidates = candidates->next;
	}
	return (best_candidate);
}

t_list	*get_candidates(t_list *coordinates)
{
	t_list			*candidates;
	t_list			*best_candidate;
	t_list			*best_best_candidate;
	t_coordinates	c;

	candidates = NULL;
	while (coordinates)
	{
		c = *(t_coordinates *)coordinates->content;
		candidates = get_candidates_list(&candidates, &c);
		coordinates = coordinates->next;
	}
    best_candidate = get_best_candidate(candidates);
    best_best_candidate = ft_lstmap(best_candidate, (void *(*)(void *)) ft_strdup, free);
    ft_lstclear(&candidates, free);
	return (best_best_candidate);
}

void	sort_big(t_list **stack_a, t_list **stack_b)
{
	t_list	*coordinates;
	t_list	*best_candidate;

	pb(stack_a, stack_b);
	while (ft_lstsize(*stack_a))
	{
		coordinates = get_all_coordinates(stack_a, stack_b);
		best_candidate = get_candidates(coordinates);
        move_best_candidate(stack_a, stack_b, best_candidate);
        ft_lstclear(&coordinates, free);
	}
	fix_middle(stack_b);
	push_all_b_elements_to_a(stack_a, stack_b);
}

void move_best_candidate(t_list **stack_a, t_list **stack_b, t_list *best_candidate) {
    char	*cmd;

    while (best_candidate)
    {
        cmd = (char *)best_candidate->content;
        move_by_cmd(stack_a, stack_b, cmd);
        best_candidate = best_candidate->next;
    }
}
