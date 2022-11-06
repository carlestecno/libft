/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:17:26 by ccasadem          #+#    #+#             */
/*   Updated: 2022/10/31 10:17:26 by ccasadem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	neg;

	neg = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		neg = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr <= '9' && *nptr >= '0')
	{
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	return (result * neg);
}
