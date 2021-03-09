/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:14:18 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 11:24:14 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	swap(t_stack stack)
{
	int		tmp;

	if (stack.len > 1)
	{
		tmp = stack.content[0];
		stack.content[0] = stack.content[1];
		stack.content[1] = tmp;
	}
}

void	sa(t_stack a, t_stack b)
{
	swap(a);
}

void	sb(t_stack a, t_stack b)
{
	swap(b);
}

void	ss(t_stack a, t_stack b)
{
	swap(a);
	swap(b);
}
