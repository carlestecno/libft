/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:45:33 by ccasadem          #+#    #+#             */
/*   Updated: 2022/11/08 16:26:29 by ccasadem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_power(unsigned int nb)
{
	int	i;

	i = 1;
	while (nb > 9)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	int				neg;
	int				i;

	neg = 0;
	nb = n;
	if (n < 0)
	{
		neg = 1;
		nb = -n;
	}
	i = ft_power(nb);
	str = (char *) malloc((i + neg + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[i + neg] = '\0';
	while (i > 0)
	{
		str[i-- + neg - 1] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
