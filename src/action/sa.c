/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:25:11 by msloot            #+#    #+#             */
/*   Updated: 2024/06/08 18:13:33 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *a)
{
	t_value	tmp;

	tmp = a->head->value;
	a->head->value = a->head->next->value;
	a->head->next->value = tmp;
	ft_putstr("sa\n");
}
