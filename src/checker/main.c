/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/07/01 18:30:49 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_action(t_stack *a, t_stack *b, char *action)
{
	if (ft_strcmp(action, "pa") == 0)
		push_a(a, b);
	if (ft_strcmp(action, "pb") == 0)
		push_b(a, b);
	if (ft_strcmp(action, "ra") == 0)
		rotate_a(a);
	if (ft_strcmp(action, "rb") == 0)
		rotate_b(b);
	if (ft_strcmp(action, "rr") == 0)
		rotate_both(a, b);
	if (ft_strcmp(action, "rra") == 0)
		reverse_rotate_a(a);
	if (ft_strcmp(action, "rrb") == 0)
		reverse_rotate_b(b);
	if (ft_strcmp(action, "rrr") == 0)
		reverse_rotate_both(a, b);
	if (ft_strcmp(action, "sa") == 0)
		swap_a(a);
	if (ft_strcmp(action, "sb") == 0)
		swap_b(b);
	if (ft_strcmp(action, "ss") == 0)
		swap_both(a, b);
}

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
	char	*action;

	a = ft_stack_new();
	b = ft_stack_new();
	if (!argument_checker(argc, argv, &a))
		return (1);
	if (!a.size)
		return (0);
	action = get_next_line(0);
	while (action != NULL)
	{
		handle_action(&a, &b, action);
		free(action);
		action = get_next_line(0);
	}
	free(action);
	if (in_order(&a) && b.size == 0)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	ft_stack_clear(&a);
	return (0);
}
