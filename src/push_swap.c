/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/05/05 16:27:44 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	handle_args(char *str, t_stack *a)
{
	char	**s;
	size_t	i;
	int		tmp;

	s = ft_split_any_of(str, " \n\t\r\v\f");
	i = 0;
	while (s[i] != '\0')
	{
		tmp = ft_atoi_digits_only(s[i]);
		// set the numbers in "a" with lstlast
	}
}

static bool	check_args(int argc, char *argv[], t_stack *a)
{
	size_t	i;

	i = 1;
	if (argc < 2)
		return (false);
	while (i < argc)
	{
		handle_args(argv[i], a);
		i++;
	}
	return (true);
}

int	push_swap(int argc, char *argv[])
{
	t_stack	*a;

	a = NULL;
	if (!check_args(argc, argv, a))
		return (1);
}
