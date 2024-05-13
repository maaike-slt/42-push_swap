/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:30:35 by msloot            #+#    #+#             */
/*   Updated: 2024/05/13 22:41:20 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	over_and_underflow_int(ssize_t number)
{
	if (number <= INT_MAX && number >= INT_MIN)
		return (true);
	ft_puterr("the number [");
	ft_putstr_fd(Y_B_MAG, STDERR_FILENO);
	ft_putnbr_fd(number, STDERR_FILENO);
	ft_putstr_fd(Y_RESET, STDERR_FILENO);
	if (number > INT_MAX)
		ft_putstr_fd("] is too high, only numbers within int range allowed",
			STDERR_FILENO);
	else
		ft_putstr_fd("] is too small, only numbers within int range allowed",
			STDERR_FILENO);
	return (false);
}

static bool	nbr_check(char *str, t_node *new)
{
	ssize_t	number;
	// size_t	i;

	// need to work when str[0] = '-' or '+'
	// but also need to not segfault if str[0] = '\0' (str = "")
	// i = 0;
	// if (str[0] == '-' || str[0] == '+')
	// 	i++;
	if (!ft_is_all(str + (str[0] == '-' || str[0] == '+'), ft_isdigit))
		return (ft_puterr(\
"another character than a digit has been found, only digits allowed"), false);
	if (ft_strlen(str) > 18)
		return (ft_puterr(\
"one or more of the given numbers does not fit within int range"), false);
	number = ft_aton(str);
	if (!over_and_underflow_int(number))
		return (false);
	new = ft_node_new(number);
	if (!new)
		return (ft_puterr(\
"did not manage to allocate the memory of the intended new node"), false);
	return (true);
}

static bool	handle_arg(const char *str, t_stack *a)
{
	char	**split;
	size_t	i;
	t_node	*new;

	split = ft_split_whitespace(str);
	i = 0;
	new = NULL;
	while (split[i] != NULL)
	{
		if (!nbr_check(split[i], new))
		{
			ft_free_2d((void ***)(&split), ft_2d_size((const void **)split));
			return (false);
		}
		ft_stack_add_back(a, new);
		i++;
	}
	ft_free_2d((void ***)(&split), ft_2d_size((const void **)split));
	return (true);
}

bool	check_args(int argc, char *argv[], t_stack *a)
{
	size_t	i;

	if (argc < 2)
		return (false);	// this should not be an error, but you do need to return in the main and free a
	i = 1;
	while (i < (size_t)argc)
	{
		if (!handle_arg(argv[i], a))
			return (false);
		i++;
	}
	return (true);
}
