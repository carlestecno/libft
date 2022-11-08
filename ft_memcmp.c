/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:47:01 by ccasadem          #+#    #+#             */
/*   Updated: 2022/11/08 16:51:20 by ccasadem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*uc1;
	unsigned char	*uc2;

	uc1 = (unsigned char *)str1;
	uc2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (uc1[i] != uc2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (uc1[i] - uc2[i]);
}
