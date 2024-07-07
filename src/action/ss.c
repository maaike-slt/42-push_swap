/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:51:43 by msloot            #+#    #+#             */
/*   Updated: 2024/07/07 14:03:15 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_both(t_stack *a, t_stack *b, bool print)
{
	swap_stk(a);
	swap_stk(b);
	if (print)
		ft_putstr("ss\n");
}
