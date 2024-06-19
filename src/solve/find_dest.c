/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_dest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:26:00 by msloot            #+#    #+#             */
/*   Updated: 2024/06/19 21:52:40 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_loose_node
{
	t_value	value;
	size_t	index;
}	t_loose_node;

static bool	search_b(t_value v,
					t_stack *b,
					t_loose_node *max,
					t_loose_node *capped_max)
{
	t_node	*current;
	size_t	i;
	bool	found;

	current = b->head;
	i = 0;
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
	t_loose_node	max;
	t_loose_node	capped_max;

	max.value = INT_MIN;
	max.index = 0;
	capped_max.value = INT_MIN;
	capped_max.index = 0;
	if (search_b(v, b, &max, &capped_max))
		return (capped_max.index);
	return (max.index);
}

static bool	search_a(t_value v,
					t_stack *a,
					t_loose_node *min,
					t_loose_node *capped_min)
{
	t_node	*current;
	size_t	i;
	bool	found;

	current = a->head;
	i = 0;
	found = false;
	while (i < a->size)
	{
		if (current->value < min->value)
		{
			min->value = current->value;
			min->index = i;
		}
		if (current->value < capped_min->value && current->value > v)
		{
			capped_min->value = current->value;
			capped_min->index = i;
			found = true;
		}
		current = current->next;
		i++;
	}
	return (found);
}

size_t	find_dest_a(t_value v, t_stack *a)
{
	t_loose_node	min;
	t_loose_node	capped_min;

	min.value = INT_MAX;
	min.index = 0;
	capped_min.value = INT_MAX;
	capped_min.index = 0;
	if (search_a(v, a, &min, &capped_min))
		return (capped_min.index);
	return (min.index);
}
