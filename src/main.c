/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/05/30 21:52:31 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;

	a = ft_stack_new();
	if (!parse(argc, argv, &a))
		return (1);
	ft_stack_print(&a);
	if (!a.size)
		return (0);
	if (double_nbr(&a))
	{
		ft_puterr(\
"one or more number(s) have been found double, no duplictes allowed");
		ft_stack_clear(&a);
		return (1);
	}
	ft_stack_clear(&a);
	return (0);
}
