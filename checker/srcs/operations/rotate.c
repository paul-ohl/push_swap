/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:52:24 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 15:54:08 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void rotate(t_stack *stack)
{
	int		svg;
	size_t	i;

	if (stack->len > 1)
	{
		svg = stack->content[0];
		i = 0;
		while (i < stack->len - 1)
		{
			stack->content[i] = stack->content[i + 1];
			i++;
		}
		stack->content[i] = svg;
	}
}

void	ra(t_stack *a, t_stack *b)
{
	rotate(a);
	b->len = b->len;
}

void	rb(t_stack *a, t_stack *b)
{
	rotate(b);
	a->len = a->len;
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
}
