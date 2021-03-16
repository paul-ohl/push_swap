/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:28:45 by paulohl           #+#    #+#             */
/*   Updated: 2021/03/16 18:20:36 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "double_linked_list.h"

void	*new_node(int number)
{
	t_list	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->number = number;
	return (new);
}

void	insert_before(t_list *list, t_list *node)
{
	if (!list || !node)
		return ;
	node->prev = list->prev;
	node->next = list;
	if (node->prev)
		node->prev->next = node;
	if (node->next)
		node->next->prev = node;
}

void	insert_after(t_list *list, t_list *node)
{
	if (!list || !node)
		return ;
	node->prev = list;
	node->next = list->next;
	if (node->prev)
		node->prev->next = node;
	if (node->next)
		node->next->prev = node;
}

void	free_node(t_list *node)
{
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);
}

void	free_whole_list(t_list *list)
{
	if (!list)
		return ;
	while (list->next)
		free_node(list->next);
	while (list->prev)
		free_node(list->prev);
	free_node(list);
}
