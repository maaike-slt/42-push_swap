/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/05/03 17:34:08 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	handle_args(char *str)
{
		// split the string of numbers into seperate ones
		// convert the seperate strings into numbers and check if there are only numbers
		// set the numbers in "a" with lstlast
}

static bool	check_args(int argc, char *argv[])
{
	size_t	i;

	i = 1;
	if (argc < 2)
		return (false);
	while (i < argc)
	{
		handle_args(argv[i]);
		i++;
	}
	return (true);
}

int	push_swap(int argc, char *argv[])
{
	t_stack	*a;

	a = NULL;
	if (!check_args(argc, argv))
		return (1);
}
