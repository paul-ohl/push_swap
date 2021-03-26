/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_with_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:03:47 by paulohl           #+#    #+#             */
/*   Updated: 2021/03/21 15:08:13 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	order_list(int *numbers, size_t len)
{
	size_t	i;
	size_t	j;
	int		tmp;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (numbers[i] > numbers[j])
			{
				tmp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*fill_list(t_list *list, size_t len)
{
	int		*numbers;
	size_t	i;

	numbers = malloc(sizeof(numbers) * len);
	if (!numbers)
		return (NULL);
	i = 0;
	while (i < len)
	{
		numbers[i] = list->number;
		list = list->next;
		i++;
	}
	return (numbers);
}

int	get_index(int *numbers, int reference)
{
	size_t	i;

	i = 0;
	while (numbers[i] != reference)
		i++;
	return (i);
}

void	replace_original(t_list *list, int *numbers, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		list->number = get_index(numbers, list->number);
		list = list->next;
		i++;
	}
}

bool	replace_with_index(t_list *list, size_t len)
{
	int		*numbers;

	numbers = fill_list(list, len);
	if (!numbers)
		return (false);
	order_list(numbers, len);
	replace_original(list, numbers, len);
	free(numbers);
	return (true);
}
