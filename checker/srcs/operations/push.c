/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:23:38 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 11:59:00 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	push(t_stack to, t_stack from)
{
	int	i;

	if (from.len > 0)
	{
		i = to.len;
		while (i > 0)
		{
			to.content[i] = to.content[i - 1];
			i--;
		}
		to.len++;
		to.content[0] = from.content[0];
		from.len--;
		i = 0;
		while (i < from.len)
		{
			from.content[i] = from.content[i + 1];
			i++;
		}
	}
}

void	pa(t_stack a, t_stack b)
{
	push(a, b);
}

void	pb(t_stack a, t_stack b)
{
	push(b, a);
}
