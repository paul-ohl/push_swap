/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:14:02 by pohl              #+#    #+#             */
/*   Updated: 2021/03/16 16:55:31 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

void	print_stacks(t_stack *a, t_stack *b)
{
	size_t	i;
	size_t	j;

	if (!a || !b)
		return ;
	i = 0;
	j = 0;
	while (i < a->len || j < b->len)
	{
		if (i < a->len && j < b->len)
		{
			printf("%3d |%3d\n", a->top->number, b->top->number);
			a->top = a->top->next;
			b->top = b->top->next;
		}
		else if (i < a->len)
		{
			printf("%3d |\n", a->top->number);
			a->top = a->top->next;
		}
		else
		{
			printf("    |%3d\n", a->top->number);
			b->top = b->top->next;
		}
		i++;
		j++;
	}
	printf("  a |  b\n");
}
