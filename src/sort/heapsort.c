/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heapsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 01:07:55 by coder             #+#    #+#             */
/*   Updated: 2022/05/09 01:21:17 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static void	heapify(int arr[], int n, int i)
{
	int		largest;
	int		l;
	int		r;

	largest = i;
	l = 2 * i + 1;
	r = 2 * i + 2;
	if (l < n && arr[l] > arr[largest])
		largest = l;
	if (r < n && arr[r] > arr[largest])
		largest = r;
	if (largest != i)
	{
		ft_swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest);
	}
}

void	heapsort(int arr[], int n)
{
	int	i;

	i = n / 2 - 1;
	while (i >= 0)
	{
		heapify(arr, n, i);
		i--;
	}
	i = n - 1;
	while (i > 0)
	{
		ft_swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
		i--;
	}
}
