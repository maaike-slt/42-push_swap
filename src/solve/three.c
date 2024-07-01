/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:30:00 by msloot            #+#    #+#             */
/*   Updated: 2024/07/01 22:01:16 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
1 2 3
3 2 1
3 1 2
2 3 1
1 3 2
2 1 3
*/

/*
1 2 3
*/

static void	order_dispatch(t_stack *stk, t_value first,
							t_value second, t_value third)
{
	if ((first > second && second > third)
		|| (first < second && second > third && first < third)
		|| (first > second && second < third && first < third))
		swap_a(stk);
}

void	order_three(t_stack *stk)
{
	return (order_dispatch(
			stk,
			stk->head->value,
			stk->head->next->value,
			stk->head->next->next->value));
}

/*
1 2 3 -> -
3 2 1 -> sa
3 1 2 -> -
2 3 1 -> -
1 3 2 -> sa
2 1 3 -> sa
*/

/*
1 2 3
2 3 1
3 1 2
*/

static void	dispatch(t_stack *stk, t_value first, t_value second, t_value third)
{
	if (first < second && second < third)
		return ;
	if (first > second && second > third)
	{
		rotate_a(stk);
		swap_a(stk);
	}
	else if (first > second && second < third && third < first)
		rotate_a(stk);
	else if (first < second && second > third && third < first)
		reverse_rotate_a(stk);
	else if (first < second && second > third)
	{
		reverse_rotate_a(stk);
		swap_a(stk);
	}
	else
		swap_a(stk);
}

void	three(t_stack *stk)
{
	return (dispatch(
			stk,
			stk->head->value,
			stk->head->next->value,
			stk->head->next->next->value));
}
