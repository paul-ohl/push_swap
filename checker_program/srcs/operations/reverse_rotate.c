/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:04:42 by pohl              #+#    #+#             */
/*   Updated: 2021/04/12 11:32:33 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	reverse_rotate(t_stack *stack)
{
	if (stack->top)
		stack->top = stack->top->prev;
}

bool		rra(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	b->len = b->len;
	return (true);
}

bool		rrb(t_stack *a, t_stack *b)
{
	reverse_rotate(b);
	a->len = a->len;
	return (true);
}

bool		rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	return (true);
}
