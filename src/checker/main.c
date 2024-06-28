/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:51:26 by msloot            #+#    #+#             */
/*   Updated: 2024/06/28 22:17:18 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_action(t_stack *a, char **action)
{
	t_stack	b;
	size_t	current;

	b = ft_stack_new();
	current = 0;
	if
	if	
	if
	if
	if
}

int	main(int argc, char *argv[])
{
	t_stack	a;
	char	**action;
	size_t	i;

	a = ft_stack_new();
	if (!parse(argc, argv, &a))
		return (1);
	i = 0;
	action[i] = get_next_line(0);
	i++;
	while (action[i] != NULL)
	{
		action[i] = get_next_line(0);
		i++;
	}
	handle_action(&a, action);
	ft_stack_clear(&a);
	return (0);
}
