/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:14:14 by msloot            #+#    #+#             */
/*   Updated: 2024/06/16 17:07:35 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_stk(t_stack *stk)
{
	stk->head = stk->head->prev;
}
