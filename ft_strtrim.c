/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:09:21 by ccasadem          #+#    #+#             */
/*   Updated: 2022/11/02 09:57:27 by carles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptrs;
	char	*ptre;
	char	*ptrm;

	while (ft_strchr(set, *s1))
	{
		s1++;
	}
	ptrs = (char *)s1;
	while (*s1)
	{
		s1++;
	}
	s1--;
	while (ft_strchr(set, *s1))
	{
		s1--;
	}
	ptre = (char *)s1;
	ptrm = (char *)malloc(ptre - ptrs + 2);
	if (!ptrm)
		return (NULL);
	ft_strlcpy(ptrm, ptrs, ptre - ptrs + 2);
	return (ptrm);
}
