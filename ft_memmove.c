/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:43:41 by ccasadem          #+#    #+#             */
/*   Updated: 2022/10/30 19:07:34 by carles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*str_dst;
	const char	*str_src;

	str_dst = dst;
	str_src = (char *)src;
	if (!src && !dst)
		return (0);
	if (str_dst > str_src)
	{
		while (n--)
		{
			str_dst[n] = str_src[n];
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
