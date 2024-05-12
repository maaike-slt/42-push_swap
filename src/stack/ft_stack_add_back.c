/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:36:33 by msloot            #+#    #+#             */
/*   Updated: 2024/05/12 18:17:29 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stack_add_back(t_stack *stk, t_node *new)
{
	t_node	*tmp;

	if (!stk || !new)
		return ;
	if (stk->head == NULL)
	{
		stk->head = new;
		stk->head->next = stk->head;
		stk->head->prev = stk->head;
		return ;
	}
	tmp = ft_stack_last_node(stk);
	tmp->next = new;
	new->next = stk->head;
	stk->head->prev = new;
	new->prev = tmp;
	stk->size += 1;
}
