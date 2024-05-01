/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/05/01 17:49:27 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	check_args(int argc, char *argv[])
{
	size_t	i;

	i = 1;
	if (argc < 2)
		return (ft_puterr
			("not enough arguments given, at least 2 needed"), false);
	if (argc == 2)
	{
		// split the string of numbers into seperate ones
		// convert the seperate strings into numbers and check if there are only numbers
		// set the numbers in "a" with lstlast
	}
	while (i < argc)
	{
		// convert the seperate strings into numbers and check if there are only numbers
		// set the numbers in "a" with lstlast
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
