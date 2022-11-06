/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:24:44 by ccasadem          #+#    #+#             */
/*   Updated: 2022/10/31 10:24:44 by ccasadem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(src);
	if (size == 0)
	{
		return (i);
	}
	size--;
	while (size-- && (*src))
	{
		*dst++ = *src++;
	}
	*dst = 0;
	return (i);
}
// int main(void)
// {
//   int i;
//   char  *src = "Patata";
//   char  dest[50];

//   printf("El valor int de: %d i str: %s", strlcpy(dest, src, 2), dst);
//   return (0);
// }
