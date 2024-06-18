/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:31:46 by msloot            #+#    #+#             */
/*   Updated: 2024/06/18 19:35:52 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_top(t_stack *a, t_stack *b, t_value value, size_t index)
{
	ssize_t	rotate_amount_a;
	ssize_t	rotate_amount_b;

	rotate_amount_a = calc_direction(index, a->size);
	rotate_amount_b = find_dest_b(value, b);
	while (rotate_amount_a < 0 && rotate_amount_b < 0)
	{
		reverse_rotate_both(a, b);
		rotate_amount_a++;
		rotate_amount_b++;
	}
	while (rotate_amount_a > 0 && rotate_amount_b > 0)
	{
		reverse_rotate_both(a, b);
		rotate_amount_a--;
		rotate_amount_b--;
	}
	while (rotate_amount_a < 0)
	{
		reverse_rotate_a(a);
		rotate_amount_a++;
	}
	while (rotate_amount_b < 0)
	{
		reverse_rotate_b(b);
		rotate_amount_b++;
	}
	while (rotate_amount_a > 0)
	{
		rotate_a(a);
		rotate_amount_a--;
	}
	while (rotate_amount_b > 0)
	{
		rotate_b(b);
		rotate_amount_b--;
	}
}

void	sort_to_b(t_stack *a, t_stack *b, t_value value, size_t index)
{
	move_to_top(a, b, value, index);
	push_b(a, b);
}
