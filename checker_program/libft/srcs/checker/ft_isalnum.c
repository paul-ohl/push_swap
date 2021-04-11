/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:56:56 by pohl              #+#    #+#             */
/*   Updated: 2021/03/16 16:46:59 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_isalnum(const char c)
{
	if (c >= 'A' && c <= 'Z')
		return (true);
	if (c >= 'a' && c <= 'z')
		return (true);
	if (c >= '0' && c <= '9')
	{
		return (true);
	}
	return (false);
}
