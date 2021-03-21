/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:52:24 by pohl              #+#    #+#             */
/*   Updated: 2021/03/21 14:28:40 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate(t_stack *stack)
{
	stack->top = stack->top->next;
}

bool	ra(t_stack *a, t_stack *b)
{
	rotate(a);
	b->len = b->len;
	return (true);
}

bool	rb(t_stack *a, t_stack *b)
{
	rotate(b);
	a->len = a->len;
	return (true);
}

bool	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	return (true);
}
