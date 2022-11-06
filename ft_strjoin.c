/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:43:08 by ccasadem          #+#    #+#             */
/*   Updated: 2022/11/01 11:19:09 by carles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*ptrma;

	ptr = (char *)malloc(ft_strlen(s1)+ ft_strlen(s2) + 1);
	if (!ptr)
		return (0);
	ptrma = ptr;
	while (*s1)
	{
		*ptr++ = *s1;
		s1++;
	}
	while (*s2)
	{
		*ptr++ = *s2;
		s2++;
	}
	*ptr = 0;
	return (ptrma);
}
// int main(void)
// {
//     printf("lstring es de: %s", ft_strjoin("Pta", "Pataa"));
//     return (0);
// }
