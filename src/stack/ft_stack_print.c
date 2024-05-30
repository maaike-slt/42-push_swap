/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:38:54 by msloot            #+#    #+#             */
/*   Updated: 2024/05/30 22:15:42 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

#include <unistd.h>

ssize_t		ft_putnbr(ssize_t n);

void	ft_stack_print(t_stack *stk)
{
	size_t	i;
	t_node	*current;

	if (!stk || !stk->head)
		return ;
	i = 0;
	current = stk->head;
	while (i < stk->size)
	{
		ft_putnbr(current->value);
		write(1, "\n", 1);
		i++;
		current = current->next;
	}
}
