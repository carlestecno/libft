/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:38:46 by ccasadem          #+#    #+#             */
/*   Updated: 2022/11/08 14:24:54 by ccasadem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_s;
	char	*subs;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (len > len_s - start)
		len = len_s - start;
	if (start >= len_s)
		len = 0;
	subs = (char *)malloc(len + 1);
	if (subs == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (i < len_s && j < len)
	{
		subs[j++] = s[i++];
	}
	subs[j] = '\0';
	return (subs);
}
