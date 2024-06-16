/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_direction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:10:51 by msloot            #+#    #+#             */
/*   Updated: 2024/06/16 19:19:46 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t	calc_direction(size_t index, size_t size)
{
	size_t	half;

	half = size / 2;
	if (index <= half)
		return (index);
	return (index - size);
}
