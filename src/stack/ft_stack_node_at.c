/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:20:17 by msloot            #+#    #+#             */
/*   Updated: 2024/05/12 17:00:26 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_node	*ft_stack_node_at(const t_stack *stk, size_t index)
{
	size_t	i;
	t_node	*cur;

	if (stk->head == NULL)
		return (NULL);
	cur = stk->head;
	i = 0;
	while (i < index)
	{
		cur = cur->next;
		i++;
	}
	return (cur);
}
