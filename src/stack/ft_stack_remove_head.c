/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_remove_head.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:28:05 by msloot            #+#    #+#             */
/*   Updated: 2024/06/07 22:50:10 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stack_remove_head(t_stack *stk)
{
	t_node	*tmp;

	tmp = stk->head;
	stk->head = stk->head->next;
	stk->head->prev = tmp->prev;
	tmp->prev->next = stk->head;
}
