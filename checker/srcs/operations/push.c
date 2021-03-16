/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:23:38 by pohl              #+#    #+#             */
/*   Updated: 2021/03/16 19:55:01 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	push(t_stack *to, t_stack *from)
{
	t_list	*svg;

	if (!from->len)
		return ;
	if (!to->top)
	{
		to->top = from->top;
		from->top = from->top->next;
		to->top->prev->next = from->top;
		from->top->prev = to->top->prev;
		to->top->prev = to->top;
		to->top->next = to->top;
	}
	else
	{
		svg = from->top;
		from->top = from->top->next;
		from->top->prev = svg->prev;
		svg->prev->next = from->top;
		insert_before(to->top, svg);
		to->top = svg;
	}
	from->len--;
	to->len++;
}

bool	pa(t_stack *a, t_stack *b)
{
	push(a, b);
	return (true);
}

bool	pb(t_stack *a, t_stack *b)
{
	push(b, a);
	return (true);
}
