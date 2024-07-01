/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:59:33 by msloot            #+#    #+#             */
/*   Updated: 2024/07/01 20:36:50 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *a, t_stack *b, bool print)
{
	t_node	*tmp;

	tmp = b->head;
	ft_stack_remove_head(b);
	ft_stack_add_front(a, tmp);
	if (print)
		ft_putstr("pa\n");
}
