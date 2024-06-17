/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:05:56 by msloot            #+#    #+#             */
/*   Updated: 2024/06/17 23:59:21 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	continue_loop(t_stack *a, t_stack *b)
{
	if (in_order(a) && b->size == 0)
		return (false);
	// if (a->size == 3)
	// 	three(a);
	// if (b->size == 3)
	// 	three(b);
	return (true);	// TODO
}

static size_t	cheapest(t_stack *a, t_stack *b)
{
	t_node	*current;
	size_t	cur_cost;
	size_t	cheapest;
	size_t	cheapest_i;
	size_t	i;

	cheapest_i = 0;
	cheapest = a->head->value;
	current = a->head;
	i = 0;
	while (i < a->size)
	{
		cur_cost = cost(a, b, current->value, i);
		if (cur_cost < cheapest)
		{
			cheapest = cur_cost;
			cheapest_i = i;
		}
		current = current->next;
		i++;
	}
	return (cheapest_i);
}

void	loop(t_stack *a, t_stack *b)
{
	while (continue_loop(a, b))
	{
	}
}
