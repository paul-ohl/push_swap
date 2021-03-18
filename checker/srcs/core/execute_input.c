/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:57:52 by paulohl           #+#    #+#             */
/*   Updated: 2021/03/17 20:20:47 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "checker.h"

#include <stdio.h>

static bool	execute_instruction(char *instruction, t_stack *a, t_stack *b)
{
	if (!ft_strcmp(instruction, "sa"))
		return (sa(a, b));
	if (!ft_strcmp(instruction, "sb"))
		return (sb(a, b));
	if (!ft_strcmp(instruction, "ss"))
		return (ss(a, b));
	if (!ft_strcmp(instruction, "pa"))
		return (pa(a, b));
	if (!ft_strcmp(instruction, "pb"))
		return (pb(a, b));
	if (!ft_strcmp(instruction, "ra"))
		return (ra(a, b));
	if (!ft_strcmp(instruction, "rb"))
		return (rb(a, b));
	if (!ft_strcmp(instruction, "rr"))
		return (rr(a, b));
	if (!ft_strcmp(instruction, "rra"))
		return (rra(a, b));
	if (!ft_strcmp(instruction, "rrb"))
		return (rrb(a, b));
	if (!ft_strcmp(instruction, "rrr"))
		return (rrr(a, b));
	return (false);
}

bool	execute_input(t_stack *a, t_stack *b)
{
	char	*instruction;
	int		err;

	err = get_next_line(0, &instruction);
	while (err)
	{
		if (err == -1 || !execute_instruction(instruction, a, b))
		{
			free(instruction);
			free_whole_list(a->top, a->len);
			free_whole_list(b->top, b->len);
			return (false);
		}
		print_stacks(a, b);
		free(instruction);
		err = get_next_line(0, &instruction);
	}
	return (true);
}
