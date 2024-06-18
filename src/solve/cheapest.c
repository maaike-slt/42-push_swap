/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:05:16 by msloot            #+#    #+#             */
/*   Updated: 2024/06/18 19:10:43 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cheapest(t_stack *a, t_stack *b, t_value *value, size_t *index)
{
	size_t	cheapest_cost;
	size_t	cur_cost;
	t_node	*current;
	size_t	i;

	cheapest_cost = __SIZE_MAX__;
	current = a->head;
	i = 0;
	while (i < a->size)
	{
		cur_cost = cost(a, b, current->value, i);
		if (cur_cost < cheapest_cost)
		{
			cheapest_cost = cur_cost;
			*value = current->value;
			*index = i;
		}
		current = current->next;
		i++;
	}
}