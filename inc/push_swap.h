/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:39:50 by msloot            #+#    #+#             */
/*   Updated: 2024/06/19 21:44:28 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdbool.h>
# include <limits.h>

# include "../libft/inc/libft.h"
# include "./stack.h"

bool	parse(int argc, char *argv[], t_stack *a);

void	three(t_stack *stk);

void	swap_stk(t_stack *stk);
void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	swap_both(t_stack *a, t_stack *b);
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);
void	rotate_a(t_stack *a);
void	rotate_b(t_stack *b);
void	rotate_stk(t_stack *stk);
void	rotate_both(t_stack *a, t_stack *b);
void	reverse_rotate_a(t_stack *a);
void	reverse_rotate_b(t_stack *a);
void	reverse_rotate_stk(t_stack *stk);
void	reverse_rotate_both(t_stack *a, t_stack *b);

bool	double_nbr(t_stack *a);
bool	in_order(t_stack *stk);

void	solve(t_stack *a);
bool	start(t_stack *a, t_stack *b);
void	loop(t_stack *a, t_stack *b);
void	end(t_stack *a, t_stack *b);

void	cheapest(t_stack *a, t_stack *b, t_value *value, size_t *index);
size_t	cost(t_stack *a, t_stack *b, t_value value, size_t value_index);
ssize_t	calc_direction(size_t index, size_t size);
size_t	find_dest_b(t_value v, t_stack *b);
void	sort_to_b(t_stack *a, t_stack *b, t_value value, size_t index);
size_t	find_dest_a(t_value v, t_stack *a);
void	sort_to_a(t_stack *a, t_stack *b, t_value value);
void	rotate_donut_a(t_stack *a, ssize_t rotate_amount_a);
void	rotate_donut_b(t_stack *b, ssize_t rotate_amount_b);

#endif
