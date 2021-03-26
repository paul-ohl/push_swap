/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:04:42 by pohl              #+#    #+#             */
/*   Updated: 2021/03/23 18:24:18 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

static void reverse_rotate(t_stack *stack)
{
	stack->top = stack->top->prev;
}

bool	rra(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	b->len = b->len;
	write(1, "rra\n", 4);
	return (true);
}

bool	rrb(t_stack *a, t_stack *b)
{
	reverse_rotate(b);
	a->len = a->len;
	write(1, "rrb\n", 4);
	return (true);
}

bool	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
	return (true);
}
