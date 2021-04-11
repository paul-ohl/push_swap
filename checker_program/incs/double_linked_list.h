/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:20:13 by paulohl           #+#    #+#             */
/*   Updated: 2021/04/03 17:59:15 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLE_LINKED_LIST_H
# define DOUBLE_LINKED_LIST_H

typedef struct s_list	t_list;
struct s_list
{
	t_list	*prev;
	t_list	*next;
	int		number;
};

void	*new_node(int number);
void	insert_before(t_list *list, t_list *node);
void	insert_after(t_list *list, t_list *node);
void	free_node(t_list *node);
void	free_whole_list(t_list *list, size_t len);

#endif
