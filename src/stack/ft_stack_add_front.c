/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:36:33 by msloot            #+#    #+#             */
/*   Updated: 2024/05/12 18:16:59 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stack_add_front(t_stack *stk, t_node *new)
{
	if (!stk || !new)
		return ;
	if (stk->head == NULL)
	{
		stk->head = new;
		stk->head->next = stk->head;
		stk->head->prev = stk->head;
		return ;
	}
	stk->head->prev = new;
	new->prev = ft_stack_last_node(stk);
	new->next = stk->head;
	new->prev->next = new;
	stk->head = new;
	stk->size += 1;
}
