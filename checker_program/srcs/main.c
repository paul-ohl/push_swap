/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:07:55 by pohl              #+#    #+#             */
/*   Updated: 2021/04/03 13:00:32 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc == 1)
		return (0);
	if (!init_stacks(&a, &b, argc, argv))
		return (print_err());
	if (!execute_input(&a, &b))
		return (print_err());
	if (is_stack_sorted(&a, &b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_whole_list(a.top, a.len);
	return (0);
}
