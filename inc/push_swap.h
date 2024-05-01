/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:39:50 by msloot            #+#    #+#             */
/*   Updated: 2024/05/01 17:23:03 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define WITH_OPEN

# include <unistd.h>
# include <stdbool.h>

# include "../libft/inc/libft.h"

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

int	push_swap(int argc, char *argv[]);

#endif
