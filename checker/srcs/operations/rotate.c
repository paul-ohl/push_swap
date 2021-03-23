/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:52:24 by pohl              #+#    #+#             */
/*   Updated: 2021/03/23 19:57:52 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void rotate(t_stack *stack)
{
	if (stack->top)
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
