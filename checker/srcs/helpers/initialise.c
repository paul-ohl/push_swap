/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialise.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:08:45 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 14:25:58 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "checker.h"

bool	init_stacks(t_stack a, t_stack b, int argc, char **argv)
{
	int		i;

	argc--;
	argv++;
	a.len = argc;
	b.len = 0;
	a.content = malloc(sizeof(a.content) * a.len);
	if (!a.content)
		return (false);
	b.content = malloc(sizeof(b.content) * a.len);
	if (!b.content)
		return (false);
	i = 0;
	while (i < argc)
	{
		a.content[i] = ft_atoi(argv[i]);
		i++;
	}
	return (true);
}
