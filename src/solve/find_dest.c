/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_dest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:26:00 by msloot            #+#    #+#             */
/*   Updated: 2024/06/16 20:02:43 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_max
{
	t_value	value;
	size_t	index;
}	t_max;

static bool	search(t_value v, t_stack *b, t_max *max, t_max *capped_max)
{
	t_node	*current;
	size_t	i;
	bool	found;

	current = b->head->next;
	i = 1;
	found = false;
	while (i < b->size)
	{
		if (current->value > max->value)
		{
			max->value = current->value;
			max->index = i;
		}
		if (current->value > capped_max->value && current->value < v)
		{
			capped_max->value = current->value;
			capped_max->index = i;
			found = true;
		}
		current = current->next;
		i++;
	}
	return (found);
}

size_t	find_dest_b(t_value v, t_stack *b)
{
	t_max	max;
	t_max	capped_max;

	max.value = b->head->value;
	max.index = 1;
	capped_max.value = b->head->value;
	capped_max.index = 1;
	if (search(v, b, &max, &capped_max))
		return (capped_max.index);
	return (max.value);
}
