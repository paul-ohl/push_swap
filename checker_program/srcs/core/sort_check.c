/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:29:19 by paulohl           #+#    #+#             */
/*   Updated: 2021/04/12 11:31:55 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

bool	is_stack_sorted(t_stack *a, t_stack *b)
{
	size_t	i;

	if (b->len > 0)
		return (false);
	i = 0;
	while (++i < a->len)
	{
		if (a->top->number > a->top->next->number)
			return (false);
		a->top = a->top->next;
	}
	return (true);
}
