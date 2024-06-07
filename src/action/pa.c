/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:59:33 by msloot            #+#    #+#             */
/*   Updated: 2024/06/07 22:56:16 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	tmp = b->head;
	ft_stack_remove_head(b, tmp);

	ft_stack_add_front(a, tmp);
	ft_putstr("pa\n");
}
