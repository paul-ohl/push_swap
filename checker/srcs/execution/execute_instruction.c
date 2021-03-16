/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_instruction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 19:43:31 by paulohl           #+#    #+#             */
/*   Updated: 2021/03/16 20:02:00 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker.h"

bool	execute_instruction(char *instruction, t_stack *a, t_stack *b)
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
