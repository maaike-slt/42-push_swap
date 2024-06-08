/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:25:11 by msloot            #+#    #+#             */
/*   Updated: 2024/06/08 18:14:40 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack *b)
{
	t_value	tmp;

	tmp = b->head->value;
	b->head->value = b->head->next->value;
	b->head->next->value = tmp;
	ft_putstr("sa\n");
}
