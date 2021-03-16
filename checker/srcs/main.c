/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:07:55 by pohl              #+#    #+#             */
/*   Updated: 2021/03/16 18:42:04 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc == 1)
		return (0);
	if (!is_input_valid(argc, argv))
		return (print_err("Error\n"));
	if (!init_stacks(&a, &b, argc, argv))
		return (print_err("Error\n"));
	if (!execute_input(&a, &b))
		return (print_err("Error\n"));
}
