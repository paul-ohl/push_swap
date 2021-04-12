/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:52:24 by pohl              #+#    #+#             */
/*   Updated: 2021/04/12 11:54:30 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	stack->top = stack->top->next;
}

bool		ra(t_stack *a, t_stack *b)
{
	rotate(a);
	b->len = b->len;
	write(1, "ra\n", 3);
	return (true);
}

bool		rb(t_stack *a, t_stack *b)
{
	rotate(b);
	a->len = a->len;
	write(1, "rb\n", 3);
	return (true);
}

bool		rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
	return (true);
}
