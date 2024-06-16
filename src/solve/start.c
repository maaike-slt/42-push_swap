/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:09:41 by msloot            #+#    #+#             */
/*   Updated: 2024/06/16 15:32:10 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start(t_stack *a)
{
	t_stack	b;

	if (a->size == 3)
	{
		three(a);
		return ;
	}
	b = ft_stack_new();
	push_b(a, &b);
	push_b(a, &b);
	loop(a, &b);
}