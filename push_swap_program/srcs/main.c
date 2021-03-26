/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:07:55 by pohl              #+#    #+#             */
/*   Updated: 2021/03/23 18:16:27 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc == 1)
		return (0);
	if (!init_stacks(&a, &b, argc, argv))
		return (print_err());
	print_stacks(&a, &b);
	sort_stacks(&a, &b, a.len / 2);
	free_whole_list(a.top, a.len);
	return (0);
}
