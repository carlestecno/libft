/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:15:20 by ccasadem          #+#    #+#             */
/*   Updated: 2022/10/28 09:08:51 by carles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else if (c <= 'z' && c >= 'a')
		return (2);
	else
		return (0);
}
