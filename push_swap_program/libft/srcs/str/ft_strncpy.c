/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:14:54 by paulohl           #+#    #+#             */
/*   Updated: 2021/03/31 12:15:36 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, int len)
{
	int	i;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}