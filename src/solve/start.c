/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:09:41 by msloot            #+#    #+#             */
/*   Updated: 2024/06/19 20:31:14 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	start(t_stack *a, t_stack *b)
{
	if (a->size == 3)
	{
		three(a);
		return (false);
	}
	// TODO: remove ft_stack_print()
	ft_putstr("== A ==\n");
	ft_stack_print(a);
	ft_putstr("=====\n");
	push_b(a, b);
	push_b(a, b);
	ft_putstr("== A ==\n");
	ft_stack_print(a);
	ft_putstr("== B ==\n");
	ft_stack_print(b);
	ft_putstr("=====\n");
	return (true);
}
