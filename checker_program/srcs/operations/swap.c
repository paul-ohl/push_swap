/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:14:18 by pohl              #+#    #+#             */
/*   Updated: 2021/04/12 11:33:06 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	if (stack->len <= 1)
		return ;
	tmp = stack->top->next->number;
	stack->top->next->number = stack->top->number;
	stack->top->number = tmp;
}

bool		sa(t_stack *a, t_stack *b)
{
	swap(a);
	b->len = b->len;
	return (true);
}

bool		sb(t_stack *a, t_stack *b)
{
	swap(b);
	a->len = a->len;
	return (true);
}

bool		ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	return (true);
}
