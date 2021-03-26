/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:01:35 by paulohl           #+#    #+#             */
/*   Updated: 2021/03/26 16:05:35 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stacks(t_stack *a, t_stack *b, int smallest)
{
	int		i;

	while (a->top->number == smallest)
	{
		ra(a, b);
		smallest++;
	}
	i = 0;
	while (b->len < (a->len + b->len - smallest) / 2 && smallest < a->len + b->len)
	{
		if (a->top->number < (int)(a->len + b->len + smallest) / 2)
			pb(a, b);
		else
		{
			ra(a, b);
			i++;
		}
	}
	while (i--)
		rra(a, b);
	while (b->len)
	{
		while (b->top->number != smallest)
			rb(a, b);
		pa(a, b);
		ra(a, b);
		smallest++;
	}
	if (smallest < (int)(a->len + b->len))
		sort_stacks(a, b, smallest);
}
