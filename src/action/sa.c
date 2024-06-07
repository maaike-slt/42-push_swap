/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:25:11 by msloot            #+#    #+#             */
/*   Updated: 2024/06/07 21:15:11 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *a)
{
	t_node	*tmp;

	tmp = a->head;
	a->head = a->head->next;
	a->head->next = tmp;
	a->head->prev = tmp->prev;
	ft_putstr("sa\n");
}
