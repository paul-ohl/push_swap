/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:08:45 by pohl              #+#    #+#             */
/*   Updated: 2021/03/16 18:31:04 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "checker.h"
#include "double_linked_list.h"

bool	init_stacks(t_stack *a, t_stack *b, int argc, char **argv)
{
	a->len = argc - 1;
	a->top = new_node(ft_atoi(argv[--argc]));
	if (!a->top)
		return (false);
	a->top->prev = a->top;
	a->top->next = a->top;
	b->len = 0;
	b->top = NULL;
	while (--argc)
	{
		insert_before(a->top, new_node(ft_atoi(argv[argc])));
		if (a->top->prev)
			a->top = a->top->prev;
		else
		{
			free_whole_list(a->top);
			return (false);
		}
	}
	return (true);
}
