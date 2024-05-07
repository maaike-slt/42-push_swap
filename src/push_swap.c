/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/05/07 15:14:13 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	add_end_list(t_stack **stack, t_stack *new_stack)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = new_stack;
	else
		(ft_lstlast(*stack))->next = new_stack;
}

static bool	handle_args(char *str, t_stack *a)
{
	char	**s;
	size_t	i;
	int		tmp;

	s = ft_split_any_of(str, " \n\t\r\v\f");
	i = 0;
	while (s[i] != '\0')
	{
		if (!ft_atoi_digits_only(s[i]))
			return (false);
		tmp = ft_atoi_digits_only(s[i]);
		add_end_list(a, "allocated t_stack of tmp");
		i++;
	}
	ft_free_2d(s, ft_strlen(s));
	free(s);
	return (true);
}

static bool	check_args(int argc, char *argv[], t_stack *a)
{
	size_t	i;

	i = 1;
	if (argc < 2)
		return (false);
	while (i < argc)
	{
		if (!handle_args(argv[i], a))
			return (false);
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
