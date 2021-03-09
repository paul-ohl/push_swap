/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:52:24 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 12:04:19 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void rotate(t_stack stack)
{
	int		svg;
	size_t	i;

	if (stack.len > 1)
	{
		svg = stack.content[0];
		i = 0;
		while (i < stack.len - 1)
		{
			stack.content[i] = stack.content[i + 1];
			i++;
		}
		stack.len[i] = svg;
	}
}

void	ra(t_stack a, t_stack b)
{
	rotate(a);
}

void	rb(t_stack a, t_stack b)
{
	rotate(b);
}

void	rr(t_stack a, t_stack b)
{
	rotate(a);
	rotate(b);
}
