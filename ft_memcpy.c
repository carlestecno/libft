/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:22:07 by ccasadem          #+#    #+#             */
/*   Updated: 2022/10/31 10:22:07 by ccasadem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptrsrc;
	char	*ptrdst;

	ptrdst = dst;
	ptrsrc = (char *)src;
	if (!dst && !src)
		return (0);
	while (n--)
	{
		*ptrdst++ = *ptrsrc++;
	}
	return (dst);
}
// int main()
// {
//     char *src = "Holabamic";
//     char dest[] = "Adeu  amic";

//     printf("array: %s", ft_memcpy(dest, src, 4));
// }