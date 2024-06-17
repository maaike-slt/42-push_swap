/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:13:51 by msloot            #+#    #+#             */
/*   Updated: 2024/06/17 23:40:51 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

inline size_t	cost(t_stack *a, t_stack *b, t_value value, size_t value_index)
{
	return (ft_abs(calc_direction(value_index, a->size))
		+ 1 + ft_abs(calc_direction(find_dest_b(value, b), b->size)));
}
