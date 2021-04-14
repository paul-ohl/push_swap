/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:47:06 by pohl              #+#    #+#             */
/*   Updated: 2021/04/14 17:12:39 by ft               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_isdigit(const int c)
{
	if (c >= '0' && c <= '9')
	{
		return (true);
	}
	return (false);
}
