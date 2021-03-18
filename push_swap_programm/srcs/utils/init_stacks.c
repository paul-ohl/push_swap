/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:08:45 by pohl              #+#    #+#             */
/*   Updated: 2021/03/17 20:18:33 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "checker.h"
#include "double_linked_list.h"

#include <stdio.h>

static bool is_int(int number, char *str_number)
{
	if (number == -1 && ft_strcmp("-1", str_number))
		return (false);
	return (true);
}

static bool clear_list(t_stack *stack)
{
	free_whole_list(stack->top, stack->len);
	return (false);
}

static bool check_doubles(t_list *list, size_t len)
{
	t_list	*checker;
	size_t	i;
	size_t	j;

	i = 0;
	while (i++ < len)
	{
		j = i + 1;
		checker = list->next;
		while (j++ < len)
		{
			if (checker->number == list->number)
				return (false);
			checker = checker->next;
		}
		list = list->next;
	}
	return (true);
}

bool	init_stacks(t_stack *a, t_stack *b, int argc, char **argv)
{
	a->len = 0;
	a->top = new_node(ft_atoi(argv[--argc]));
	if (!a->top)
		return (false);
	a->top->prev = a->top;
	a->top->next = a->top;
	b->len = 0;
	b->top = NULL;
	while (--argc)
	{
		a->len++;
		if (!ft_isnumber(argv[argc]))
			return (clear_list(a));
		insert_before(a->top, new_node(ft_atoi(argv[argc])));
		if (a->top->prev && is_int(a->top->prev->number, argv[argc]))
			a->top = a->top->prev;
		else
			return (clear_list(a));
	}
	a->len++;
	if (!check_doubles(a->top, a->len))
		return (clear_list(a));
	return (true);
}
