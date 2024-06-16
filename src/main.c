/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/06/16 19:44:10 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_stack *a)
{
	/*
	t_stack	b;

	b = ft_stack_new();
	ft_putstr("== A ==\n");
	ft_stack_print(a);
	if (in_order(a))
		ft_putstr("IN ORDER\n");
	else
		ft_putstr("NOT IN ORDER\n");
	swap_a(a);
	ft_putstr("== A ==\n");
	ft_stack_print(a);
	ft_putstr("== B ==\n");
	ft_stack_print(&b);
	rotate_a(a);
	ft_putstr("== A ==\n");
	ft_stack_print(a);
	ft_putstr("== B ==\n");
	ft_stack_print(&b);
	reverse_rotate_a(a);
	ft_putstr("== A ==\n");
	ft_stack_print(a);
	ft_putstr("== B ==\n");
	ft_stack_print(&b);
	*/

	ft_putstr("== A ==\n");
	ft_stack_print(a);
	ft_putstr("== three() ==\n");
	three(a);
	ft_putstr("== A ==\n");
	ft_stack_print(a);

	ft_putstr("== END ==\n\n");
}

int	main(int argc, char *argv[])
{
	t_stack	a;

	a = ft_stack_new();
	if (argc < 2)
		return (0);
	if (!parse(argc, argv, &a))
		return (1);
	test(&a);
	if (!a.size)
		return (0);
	if (double_nbr(&a))
	{
		ft_puterr(\
"one or more number(s) have been found double, no duplictes allowed");
		ft_stack_clear(&a);
		return (1);
	}
	if (in_order(&a))
	{
		while (a.head->value > a.head->prev->value)
			rotate_a(&a);
			// check if it is not faster to use reverse_rotate instead
	}
	start(&a);
	ft_stack_clear(&a);
	return (0);
}
