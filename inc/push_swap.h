/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:39:50 by msloot            #+#    #+#             */
/*   Updated: 2024/06/08 13:48:05 by msloot           ###   ########.fr       */
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

void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	swap_both(t_stack *a, t_stack *b);
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);
void	rotate_a(t_stack *a);
void	rotate_b(t_stack *b);
void	rotate_stk(t_stack *stk);
void	rotate_both(t_stack *a, t_stack *b);

bool	double_nbr(t_stack *a);

#endif
