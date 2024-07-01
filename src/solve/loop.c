/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:05:56 by msloot            #+#    #+#             */
/*   Updated: 2024/07/01 22:29:54 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	continue_loop(t_stack *a, t_stack *b)
{
	(void)b;
	if (in_order(a))
		return (false);
	if (a->size == 3)
	{
		order_three(a);
		return (false);
	}
	return (true);
}

void	loop(t_stack *a, t_stack *b)
{
	t_value	cheapest_value;
	size_t	cheapest_index;

	while (continue_loop(a, b))
	{
		cheapest(a, b, &cheapest_value, &cheapest_index);
		sort_to_b(a, b, cheapest_value, cheapest_index);
	}
}
