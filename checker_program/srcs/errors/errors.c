/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:18:36 by pohl              #+#    #+#             */
/*   Updated: 2021/03/17 12:09:21 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <unistd.h>

int	print_err(void)
{
	write (2, "Error\n", 6);
	return (1);
}