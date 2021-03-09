/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:04:42 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 12:06:29 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void reverse_rotate(t_stack stack)
{
	int		svg;
	size_t	i;

	if (stack.len > 1)
	{
		svg = stack.content[stack.len - 1];
		i = stack.len - 1;
		while (i > 1)
		{
			stack.content[i] = stack.content[i - 1];
			i--;
		}
		stack.len[0] = svg;
	}
}

void	rra(t_stack a, t_stack b)
{
	reverse_rotate(a);
}

void	rrb(t_stack a, t_stack b)
{
	reverse_rotate(b);
}

void	rrr(t_stack a, t_stack b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}
