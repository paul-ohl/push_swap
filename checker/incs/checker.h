/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:32:32 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 14:22:39 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdbool.h>
# include <stddef.h>

typedef struct s_stack
{
	size_t	len;
	int		*content;
}			t_stack;

/* Checkers */
bool	is_input_valid(int argc, char **argv);

/* Helpers */
bool	init_stacks(t_stack a, t_stack b, int argc, char **argv);

/* Operations */
void	sa(t_stack a, t_stack b);
void	sb(t_stack a, t_stack b);
void	ss(t_stack a, t_stack b);
void	pa(t_stack a, t_stack b);
void	pb(t_stack a, t_stack b);
void	ra(t_stack a, t_stack b);
void	rb(t_stack a, t_stack b);
void	rr(t_stack a, t_stack b);
void	rra(t_stack a, t_stack b);
void	rrb(t_stack a, t_stack b);
void	rrr(t_stack a, t_stack b);

/* Errors */
int		print_err(const char *err);

#endif
