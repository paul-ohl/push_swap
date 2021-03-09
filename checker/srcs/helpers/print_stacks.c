/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:14:02 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 15:51:01 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

void	print_stacks(t_stack *a, t_stack *b)
{
	size_t	i;
	size_t	biggest_stack;

	/* printf("a->len: %zu\n", a->len); */
	if (a->len > b->len)
		biggest_stack = a->len;
	else
		biggest_stack = b->len;
	i = 0;
	while (i < biggest_stack)
	{
		if (i < a->len && i < b->len)
			printf("%3d |%3d\n", a->content[i], b->content[i]);
		else if (i < a->len)
			printf("%3d |\n", a->content[i]);
		else
			printf("    |%3d\n", a->content[i]);
		i++;
	}
	printf("  a |  b\n\n");
}
