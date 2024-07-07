/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sx.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:25:11 by msloot            #+#    #+#             */
/*   Updated: 2024/07/07 14:02:00 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stk(t_stack *stk)
{
	t_value	tmp;

	if (stk->head && stk->head->next)
	{
		tmp = stk->head->value;
		stk->head->value = stk->head->next->value;
		stk->head->next->value = tmp;
	}
}
