/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:38:46 by ccasadem          #+#    #+#             */
/*   Updated: 2022/11/01 10:11:14 by carles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*ptrmall;
	char	*ptr2;

	ptr = (char *)s;
	if (start >= strlen(s))
	{
		ptrmall = (char *)malloc(1);
		if (!ptrmall)
			return (0);
		ptrmall = 0;
	}
	ptrmall = (char *)malloc(strlen(s) - start + 1);
	ptr2 = ptrmall;
	if (!ptrmall)
		return (0);
	ptr += start;
	ft_strlcpy(ptrmall, ptr, len + 1);
	ptrmall += len;
	*ptrmall = 0;
	return (ptr2);
}
// int main()
// {
//     printf("El valor original es de: %s", ft_substr("Patata", 5, 1 ));
// }
