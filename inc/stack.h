/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:15:36 by msloot            #+#    #+#             */
/*   Updated: 2024/05/12 18:35:46 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>

typedef int	t_value;

typedef struct s_node
{
	t_value			value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node		*head;
	size_t		size;
}	t_stack;

t_stack		ft_stack_new(void);
t_node		*ft_node_new(t_value value);

t_node		*ft_stack_last_node(const t_stack *stk);
t_node		*ft_stack_node_at(const t_stack *stk, size_t index);

void		ft_stack_add_front(t_stack *stk, t_node *new);
void		ft_stack_add_back(t_stack *stk, t_node *new);

#endif