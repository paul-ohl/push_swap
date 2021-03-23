/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:01:35 by paulohl           #+#    #+#             */
/*   Updated: 2021/03/23 18:39:25 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stacks(t_stack *a, t_stack *b, int pivot)
{
	size_t	i;

	i = 0;
	while (i < a->len)
	{
		if (a->top->number < pivot)
			pb(a, b);
		else
		{
			ra(a, b);
			i++;
		}
		print_stacks(a, b);
	}
}
