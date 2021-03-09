/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:22:01 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 13:31:17 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static bool	is_a_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (false);
		str++;
	}
	return (true);
}

bool	is_input_valid(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!is_a_number(argv[i]))
			return (false);
		i++;
	}
	return (true);
}
