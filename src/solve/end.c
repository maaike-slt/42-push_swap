/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:09:41 by msloot            #+#    #+#             */
/*   Updated: 2024/06/19 22:43:09 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	smallest(t_stack *a)
{
	t_value	smallest_value;
	size_t	smallest_index;
	t_node	*current;
	size_t	i;

	smallest_index = 0;
	smallest_value = a->head->value;
	i = 1;
	current = a->head->next;
	while (i < a->size)
	{
		if (smallest_value > current->value)
		{
			smallest_value = current->value;
			smallest_index = i;
		}
		i++;
		current = current->next;
	}
	return (smallest_index);
}

void	end(t_stack *a, t_stack *b)
{
	ssize_t	rotate_amount_a;

	while (b->size > 0)
		sort_to_a(a, b, b->head->value);
	rotate_amount_a = calc_direction(smallest(a), a->size);
	rotate_donut_a(a, rotate_amount_a);
}
