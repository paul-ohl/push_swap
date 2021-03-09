/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:07:55 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 14:15:35 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc == 1)
		return (0);
	if (!is_input_valid(argc, argv))
		return (print_err("input invalid\n"));
	a.content = NULL;
	b.content = NULL;
	if (!init_stacks(a, b, argc, argv))
		return (print_err("malloc error\n"));
}
