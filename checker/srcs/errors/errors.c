/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:18:36 by pohl              #+#    #+#             */
/*   Updated: 2021/03/09 15:03:25 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <unistd.h>

int	print_err(const char *err)
{
	int		i;

	i = 0;
	while (err[i])
		i++;
	write (2, err, i);
	return (1);
}
