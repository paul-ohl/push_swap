/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:23:38 by pohl              #+#    #+#             */
/*   Updated: 2021/04/12 11:32:19 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

static t_list	*pop_node(t_stack *stack)
{
	t_list	*popped;

	popped = stack->top;
	if (stack->len == 1)
		stack->top = NULL;
	else
	{
		stack->top = stack->top->next;
		stack->top->prev = stack->top->prev->prev;
		stack->top->prev->next = stack->top;
	}
	popped->next = popped;
	popped->prev = popped;
	return (popped);
}

static void		push(t_stack *to, t_stack *from)
{
	t_list	*svg;

	if (!from->len)
		return ;
	svg = pop_node(from);
	if (to->len == 0)
		to->top = svg;
	else
	{
		svg->next = to->top;
		svg->prev = to->top->prev;
		to->top->prev->next = svg;
		to->top->prev = svg;
		to->top = to->top->prev;
	}
	from->len--;
	to->len++;
}

bool			pa(t_stack *a, t_stack *b)
{
	push(a, b);
	return (true);
}

bool			pb(t_stack *a, t_stack *b)
{
	push(b, a);
	return (true);
}
