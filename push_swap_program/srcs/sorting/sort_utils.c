/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 08:30:54 by pohl              #+#    #+#             */
/*   Updated: 2021/04/18 22:20:55 by ft               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		skip_smallest(t_stack *a, t_stack *b, int smallest)
{
	while (a->top->number == smallest)
	{
		ra(a, b);
		smallest++;
	}
	return (smallest);
}

bool	is_already_sorted(t_list *list, size_t len)
{
	size_t	i;

	i = 0;
	while (++i < len)
	{
		if (list->number > list->next->number)
			return (false);
		list = list->next;
	}
	return (true);
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
