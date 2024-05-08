/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/05/08 17:07:40 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*add_new_stack(int tmp)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (ft_puterr(\
"did not manage to allocate the memory of the intended new stack"));
	new->value = tmp;
	new->next = NULL;
	return (new);
}

static void	add_end_list(t_stack **stack, t_stack *new_stack)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = new_stack;
	else
		(ft_lstlast(*stack))->next = new_stack;
}

static bool	handle_arg(char *str, t_stack *a)
{
	char	**s;
	size_t	i;
	int		tmp;

	s = ft_split_whitespace(str);
	i = 0;
	while (s[i] != '\0')
	{
		if (!ft_isdigit(s[i]))
			return (puterr(\
"another character than a digit has been found, only digits allowed", false));
		tmp = add_new_stack(ft_atoi(s[i]));
		add_end_list(a, tmp);
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
