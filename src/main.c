/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/07/01 22:29:21 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;

	a = ft_stack_new();
	if (!parse(argc, argv, &a))
		return (1);
	if (!a.size)
		return (0);
	if (double_nbr(&a))
	{
		ft_puterr(\
"one or more number(s) have been found double, no duplictes allowed\n");
		ft_stack_clear(&a);
		return (1);
	}
	solve(&a);
	ft_stack_clear(&a);
	return (0);
}
