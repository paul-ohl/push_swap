/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:32:32 by pohl              #+#    #+#             */
/*   Updated: 2021/04/03 09:08:08 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stddef.h>
# include "double_linked_list.h"

# define T_LIST_MEM_SIZE 8

typedef struct s_stack
{
	size_t		len;
	t_list		*top;
}				t_stack;

/* Sorting */
void	sort_stacks(t_stack *a, t_stack *b);
int		skip_smallest(t_stack *a, t_stack *b, int smallest);
bool	is_closer_down(t_stack *b, int smallest);
void	sort_small_stack(t_stack *a, t_stack *b);

/* Preparatory */
bool	init_stacks(t_stack *a, t_stack *b, int argc, char **argv);
bool	replace_with_index(t_list *list, size_t len);

/* Utils */
void	print_stacks(t_stack *a, t_stack *b);
int		print_err(void);

/* Operations */
bool	sa(t_stack *a, t_stack *b);
bool	sb(t_stack *a, t_stack *b);
bool	ss(t_stack *a, t_stack *b);
bool	pa(t_stack *a, t_stack *b);
bool	pb(t_stack *a, t_stack *b);
bool	ra(t_stack *a, t_stack *b);
bool	rb(t_stack *a, t_stack *b);
bool	rr(t_stack *a, t_stack *b);
bool	rra(t_stack *a, t_stack *b);
bool	rrb(t_stack *a, t_stack *b);
bool	rrr(t_stack *a, t_stack *b);

/* Errors */
int		print_err(void);

#endif
