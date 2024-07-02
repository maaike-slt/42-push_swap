/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/07/02 16:42:35 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	argument_checker(int argc, char *argv[], t_stack *a)
{
	if (!parse(argc, argv, a))
		return (false);
	if (a->size == 0)
		return (true);
	if (double_nbr(a))
	{
		ft_puterr(\
"one or more number(s) have been found double, no duplictes allowed\n");
		ft_stack_clear(a);
		return (false);
	}
	return (true);
}

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	a = ft_stack_new();
	b = ft_stack_new();
	if (!argument_checker(argc, argv, &a))
		return (1);
	if (!a.size)
		return (0);
	if (a.size == 2)
	{
		if (a.head->value > a.head->next->value)
			swap_stk(&a);
	}
	else if (!read_action(&a, &b) && a.size != 1)
		return (1);
	if (in_order(&a)
		&& ((a.head->value < a.head->prev->value) || a.size == 1)
		&& b.size == 0)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	ft_stack_clear(&a);
	return (0);
}
