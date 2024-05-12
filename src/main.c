/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/05/12 18:43:36 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	handle_arg(const char *str, t_stack *a)
{
	char	**split;
	size_t	i;
	t_node	*new;

	split = ft_split_whitespace(str);
	i = 0;
	while (split[i] != NULL)
	{
		if (ft_is_all(split[i], ft_isdigit))
			return (ft_puterr(\
"another character than a digit has been found, only digits allowed"), false);
		// protect atoi for overflow
		new = ft_node_new(ft_atoi(split[i]));
		if (!new)
			return (ft_puterr(\
"did not manage to allocate the memory of the intended new node"), false);
		ft_stack_add_back(a, new);
		i++;
	}
	ft_free_2d((void ***)(&split), ft_2d_size((const void **)split));
	return (true);
}

static bool	check_args(int argc, char *argv[], t_stack *a)
{
	size_t	i;

	if (argc < 2)
		return (false);
	i = 1;
	while (i < (size_t)argc)
	{
		if (!handle_arg(argv[i], a))
			return (false);
		i++;
	}
	return (true);
}

int	main(int argc, char *argv[])
{
	t_stack	a;

	a = ft_stack_new();
	if (!check_args(argc, argv, &a))
		return (1);
	return (0);
}
