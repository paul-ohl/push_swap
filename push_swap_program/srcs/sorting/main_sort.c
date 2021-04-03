/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:01:35 by paulohl           #+#    #+#             */
/*   Updated: 2021/04/03 12:57:04 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

static int	split_stack_a(t_stack *a, t_stack *b, int smallest)
{
	int	i;

	i = 0;
	while (b->len < (a->len + b->len - smallest) / 2
		&& smallest < (int)(a->len + b->len))
	{
		if (a->top->number < (int)(a->len + b->len + smallest) / 2)
			pb(a, b);
		else
		{
			ra(a, b);
			i++;
		}
	}
	return (i);
}

int	sort_remains(t_stack *a, t_stack *b, int smallest)
{
	while (b->len)
	{
		if (is_closer_down(b, smallest))
		{
			while (b->top->number != smallest)
				rb(a, b);
		}
		else
		{
			while (b->top->number != smallest)
				rrb(a, b);
		}
		pa(a, b);
		ra(a, b);
		smallest++;
	}
	return (smallest);
}

int	push_largest_half(t_stack *a, t_stack *b, int smallest)
{
	int		i;
	int		pivot;
	int		initial_len;

	i = 0;
	initial_len = b->len;
	pivot = smallest + initial_len / 2;
	while ((int)(b->len) > initial_len / 2)
	{
		if (b->top->number >= pivot)
		{
			pa(a, b);
			i++;
		}
		else
			rb(a, b);
	}
	return (i);
}

int	order_stack_b(t_stack *a, t_stack *b, int smallest)
{
	int	i;

	while (b->len > 11)
	{
		i = push_largest_half(a, b, smallest);
		smallest = order_stack_b(a, b, smallest);
		while (i--)
			pb(a, b);
	}
	smallest = sort_remains(a, b, smallest);
	return (smallest);
}

void	sort_stacks(t_stack *a, t_stack *b)
{
	int		i;
	int		smallest;

	if (a->len <= 20)
	{
		sort_small_stack(a, b);
		return ;
	}
	smallest = 0;
	split_stack_a(a, b, smallest);
	smallest = order_stack_b(a, b, smallest);
	while (smallest < (int)(a->len + b->len))
	{
		smallest = skip_smallest(a, b, smallest);
		i = 0;
		i = split_stack_a(a, b, smallest);
		while (i--)
			rra(a, b);
		smallest = order_stack_b(a, b, smallest);
	}
}
