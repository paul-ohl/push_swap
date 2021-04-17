/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:31:46 by paulohl           #+#    #+#             */
/*   Updated: 2021/04/17 14:35:10 by ft               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strreplace(char *original, const char *new_value)
{
	char	*to_return;

	to_return = ft_strdup(new_value);
	free(original);
	return (to_return);
}
