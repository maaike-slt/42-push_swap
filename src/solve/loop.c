/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:05:56 by msloot            #+#    #+#             */
/*   Updated: 2024/06/18 20:02:37 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	continue_loop(t_stack *a, t_stack *b)
{
	if (in_order(a) && b->size == 0)
		return (false);
	if (a->size == 3)
	{
		three(a);
		return (false);
	}
	// if (b->size == 3)
	// 	three(b);
	return (true);	// TODO
}

void	loop(t_stack *a, t_stack *b)
{
	t_value	cheapest_value;
	size_t	cheapest_index;

	while (continue_loop(a, b))
	{
		cheapest(a, b, &cheapest_value, &cheapest_index);
		sort_to_b(a, b, cheapest_value, cheapest_index);
		ft_putstr("== A ==\n");
		ft_stack_print(a);
		ft_putstr("== B ==\n");
		ft_stack_print(b);
		ft_putstr("=====\n");
	}
}
