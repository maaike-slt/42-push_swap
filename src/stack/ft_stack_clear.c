/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:16:17 by msloot            #+#    #+#             */
/*   Updated: 2024/05/30 22:17:21 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stack_clear(t_stack *stk)
{
	size_t	i;
	t_node	*tmp;

	if (!stk || !stk->head)
		return ;
	i = 0;
	while (i < stk->size)
	{
		tmp = stk->head->next;
		ft_node_free(stk->head);
		stk->head = tmp;
		i++;
	}
}
