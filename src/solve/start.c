/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:09:41 by msloot            #+#    #+#             */
/*   Updated: 2024/07/01 18:17:57 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	start(t_stack *a, t_stack *b)
{
	if (in_order(a) && a->head->value < a->head->next->value
		&& a->head->value < a->head->prev->value)
		return (false);
	if (a->size == 1)
		return (false);
	if (a->size == 2)
	{
		if (a->head->value > a->head->next->value)
			swap_a(a);
		return (false);
	}
	if (a->size == 3)
	{
		three(a);
		return (false);
	}
	if (a->size == 4)
	{
		push_b(a, b);
		return (true);
	}
	push_b(a, b);
	push_b(a, b);
	return (true);
}
