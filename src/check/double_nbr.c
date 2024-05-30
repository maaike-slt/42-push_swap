/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:27:23 by msloot            #+#    #+#             */
/*   Updated: 2024/05/30 21:35:39 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	double_nbr(t_stack *a)
{
	size_t	i;
	size_t	p;
	t_node	*current_i;
	t_node	*current_p;

	if (!a->head)
		return (false);
	i = 0;
	current_i = a->head;
	while (i < a->size)
	{
		p = i + 1;
		current_p = current_i->next;
		while (p < a->size)
		{
			if (current_i->value == current_p->value)
				return (true);
			p++;
			current_p = current_p->next;
		}
		i++;
		current_i = current_i->next;
	}
	return (false);
}
