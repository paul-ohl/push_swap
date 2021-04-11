/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 08:30:54 by pohl              #+#    #+#             */
/*   Updated: 2021/04/03 12:14:37 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	skip_smallest(t_stack *a, t_stack *b, int smallest)
{
	while (a->top->number == smallest)
	{
		ra(a, b);
		smallest++;
	}
	return (smallest);
}

bool	is_closer_down(t_stack *stack, int smallest)
{
	t_list	*down;
	t_list	*up;

	if (stack->top->number == smallest)
		return (true);
	down = stack->top->next;
	up = stack->top->prev;
	while (down->number != smallest && up->number != smallest)
	{
		down = down->next;
		up = up->prev;
	}
	return (down->number == smallest);
}
