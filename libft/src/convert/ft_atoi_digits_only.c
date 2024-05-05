/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_digits_only.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:45:44 by msloot            #+#    #+#             */
/*   Updated: 2024/05/05 15:28:44 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_digits_only(const char *nptr)
{
	size_t	i;
	int		sign;
	int		nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] != '\0')
	{
		if (!ft_isdigit(nptr[i]))
			ft_puterr(\
"another character than a digit has been found, only digits are allowed");
		nb *= 10;
		nb += nptr[i] - '0';
		i++;
	}
	return (sign * nb);
}
