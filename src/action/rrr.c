/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:11:33 by msloot            #+#    #+#             */
/*   Updated: 2024/06/08 18:04:32 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_both(t_stack *a, t_stack *b)
{
	reverse_rotate_stk(a);
	reverse_rotate_stk(b);
	ft_putstr("rrr\n");
}
