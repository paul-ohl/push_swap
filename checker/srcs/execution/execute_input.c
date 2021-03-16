/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:57:52 by paulohl           #+#    #+#             */
/*   Updated: 2021/03/16 20:04:49 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "checker.h"

#include <stdio.h>

bool	execute_input(t_stack *a, t_stack *b)
{
	char	*instruction;
	int		err;

	err = get_next_line(0, &instruction);
	printf("err: %d\n", err);
	while (err)
	{
		if (err == -1 || execute_instruction(instruction, a, b))
		{
			free(instruction);
			return (false);
		}
		free(instruction);
		err = get_next_line(0, &instruction);
	}
	if (instruction)
		free(instruction);
	return (true);
}
