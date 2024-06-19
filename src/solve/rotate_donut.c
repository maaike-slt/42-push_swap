/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_donut.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:44:02 by msloot            #+#    #+#             */
/*   Updated: 2024/06/19 21:44:34 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_donut_a(t_stack *a, ssize_t rotate_amount_a)
{
	while (rotate_amount_a > 0)
	{
		rotate_a(a);
		rotate_amount_a--;
	}
	while (rotate_amount_a < 0)
	{
		reverse_rotate_a(a);
		rotate_amount_a++;
	}
}

void	rotate_donut_b(t_stack *b, ssize_t rotate_amount_b)
{
	while (rotate_amount_b > 0)
	{
		rotate_b(b);
		rotate_amount_b--;
	}
	while (rotate_amount_b < 0)
	{
		reverse_rotate_b(b);
		rotate_amount_b++;
	}
}
