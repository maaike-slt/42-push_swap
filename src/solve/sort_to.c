/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:31:46 by msloot            #+#    #+#             */
/*   Updated: 2024/06/19 21:44:34 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void	move_to_top_loop(t_stack *a, t_stack *b, t_value value, size_t index)
{
	ssize_t	rotate_amount_a;
	ssize_t	rotate_amount_b;

	rotate_amount_a = calc_direction(index, a->size);
	printf("index b: %zu\n", find_dest_b(value, b));
	rotate_amount_b = calc_direction(find_dest_b(value, b), b->size);
	printf("dist a: %zd\ndist b: %zd\n", rotate_amount_a, rotate_amount_b);
	while (rotate_amount_a > 0 && rotate_amount_b > 0)
	{
		reverse_rotate_both(a, b);
		rotate_amount_a--;
		rotate_amount_b--;
	}
	while (rotate_amount_a < 0 && rotate_amount_b < 0)
	{
		reverse_rotate_both(a, b);
		rotate_amount_a++;
		rotate_amount_b++;
	}
	rotate_donut_a(a, rotate_amount_a);
	rotate_donut_b(b, rotate_amount_b);
}

void	sort_to_b(t_stack *a, t_stack *b, t_value value, size_t index)
{
	move_to_top_loop(a, b, value, index);
	push_b(a, b);
}

void	move_to_top_end(t_stack *a, t_value value)
{
	ssize_t	rotate_amount_a;

	rotate_amount_a = calc_direction(find_dest_a(value, a), a->size);
	printf("dist a: %zd\n", rotate_amount_a);
	rotate_donut_a(a, rotate_amount_a);
}

void	sort_to_a(t_stack *a, t_stack *b, t_value value)
{
	move_to_top_end(a, value);
	push_a(a, b);
}
