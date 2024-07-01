/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:36:02 by msloot            #+#    #+#             */
/*   Updated: 2024/07/01 20:37:57 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_stack *a, t_stack *b, bool print)
{
	t_node	*tmp;

	tmp = a->head;
	ft_stack_remove_head(a);
	ft_stack_add_front(b, tmp);
	if (print)
		ft_putstr("pb\n");
}
