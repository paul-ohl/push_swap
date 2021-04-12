/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:32:32 by pohl              #+#    #+#             */
/*   Updated: 2021/04/12 11:49:44 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdbool.h>
# include <stddef.h>
# include "double_linked_list.h"

typedef struct	s_stack
{
	size_t		len;
	t_list		*top;
}				t_stack;

bool			is_input_valid(int argc, char **argv);

bool			init_stacks(t_stack *a, t_stack *b, int argc, char **argv);
void			print_stacks(t_stack *a, t_stack *b);
int				ft_atoi(const char *str);

bool			sa(t_stack *a, t_stack *b);
bool			sb(t_stack *a, t_stack *b);
bool			ss(t_stack *a, t_stack *b);
bool			pa(t_stack *a, t_stack *b);
bool			pb(t_stack *a, t_stack *b);
bool			ra(t_stack *a, t_stack *b);
bool			rb(t_stack *a, t_stack *b);
bool			rr(t_stack *a, t_stack *b);
bool			rra(t_stack *a, t_stack *b);
bool			rrb(t_stack *a, t_stack *b);
bool			rrr(t_stack *a, t_stack *b);

int				print_err(void);

bool			execute_input(t_stack *a, t_stack *b);
bool			is_stack_sorted(t_stack *a, t_stack *b);

#endif
