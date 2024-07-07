/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_action.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:00:38 by msloot            #+#    #+#             */
/*   Updated: 2024/07/07 14:04:08 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	handle_action(t_stack *a, t_stack *b, char *action)
{
	if (ft_strcmp(action, "pa") == 0)
		push_a(a, b, false);
	else if (ft_strcmp(action, "pb") == 0)
		push_b(a, b, false);
	else if (ft_strcmp(action, "ra") == 0)
		rotate_stk(a);
	else if (ft_strcmp(action, "rb") == 0)
		rotate_stk(b);
	else if (ft_strcmp(action, "rr") == 0)
		rotate_both(a, b, false);
	else if (ft_strcmp(action, "rra") == 0)
		reverse_rotate_stk(a);
	else if (ft_strcmp(action, "rrb") == 0)
		reverse_rotate_stk(b);
	else if (ft_strcmp(action, "rrr") == 0)
		reverse_rotate_both(a, b, false);
	else if (ft_strcmp(action, "sa") == 0)
		swap_stk(a);
	else if (ft_strcmp(action, "sb") == 0)
		swap_stk(b);
	else if (ft_strcmp(action, "ss") == 0)
		swap_both(a, b, false);
	else
		return (false);
	return (true);
}

static bool	check_action(t_stack *a, t_stack *b, char *action)
{
	if (action[ft_strlen(action) - 1] == '\n')
		action[ft_strlen(action) - 1] = '\0';
	if (!handle_action(a, b, action))
		return (false);
	return (true);
}

bool	read_action(t_stack *a, t_stack *b)
{
	char	*action;
	bool	error;

	error = false;
	action = get_next_line(0);
	while (action != NULL)
	{
		if (!check_action(a, b, action))
			error = true;
		free(action);
		action = get_next_line(0);
	}
	if (error)
		ft_putstr_fd("Error\n", STDERR_FILENO);
	return (!error);
}
