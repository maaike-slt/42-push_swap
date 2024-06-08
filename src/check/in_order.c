/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:49:46 by msloot            #+#    #+#             */
/*   Updated: 2024/06/08 17:18:18 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	in_order(t_stack *stk)
{
	size_t	i;
	t_node	*current;
	t_stack	tmp;

	current = stk->head;
	tmp = ft_stack_new();
	tmp.head = stk->head;
	tmp.size = stk->size;
	i = 0;
	while (i < stk->size)
	{
		if (current->value < tmp.head->value)
			tmp.head = current;
		current = current->next;
		i++;
	}
	i = 0;
	while (i < stk->size - 1)
	{
		if (tmp.head->value > tmp.head->next->value)
			return (false);
		tmp.head = tmp.head->next;
		i++;
	}
	return (true);
}
