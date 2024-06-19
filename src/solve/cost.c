/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:13:51 by msloot            #+#    #+#             */
/*   Updated: 2024/06/19 22:40:24 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	cost(t_stack *a, t_stack *b, t_value value, size_t value_index)
{
	ssize_t	rotate_amount_a;
	ssize_t	rotate_amount_b;
	size_t	total_rotate;

	rotate_amount_a = calc_direction(value_index, a->size);
	rotate_amount_b = calc_direction(find_dest_b(value, b), b->size);
	if ((rotate_amount_a > 0 && rotate_amount_b > 0)
		|| (rotate_amount_a < 0 && rotate_amount_b < 0))
		total_rotate = ft_umax(ft_abs(rotate_amount_a),
				ft_abs(rotate_amount_b));
	else
		total_rotate = ft_abs(rotate_amount_a) + ft_abs(rotate_amount_b);
	return (total_rotate + 1);
}
