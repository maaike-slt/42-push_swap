/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:05:56 by msloot            #+#    #+#             */
/*   Updated: 2024/06/16 19:24:50 by msloot           ###   ########.fr       */
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

void	loop(t_stack *a, t_stack *b)
{
	while (continue_loop(a, b))
	{
	}
}

/*
go on every element of stack a
element cost = \
	abs(calc_direction(element))	// get element to top
	+ 1								// push_b
	+ abs(calc_direction(
		the max element on stack b that is still smaller than element or the biggest if none are smaller
	))
*/
