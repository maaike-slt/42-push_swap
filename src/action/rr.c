/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:03:35 by msloot            #+#    #+#             */
/*   Updated: 2024/07/01 20:39:40 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack *a, t_stack *b, bool print)
{
	rotate_stk(a);
	rotate_stk(b);
	if (print)
		ft_putstr("rr\n");
}
