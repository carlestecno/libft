/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:45:33 by ccasadem          #+#    #+#             */
/*   Updated: 2022/11/05 18:14:06 by carles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n, int count)
{
	count++;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	if (n > 9)
	{
		return (ft_count(n / 10, count));
	}
	else
		return (count);
}

char	*ft_itoa(int num)
{
	char	*ptr;
	int		len;
	int		flag;

	flag = 0;
	len = ft_count(num, 0);
	ptr = (char *) malloc(len + 1);
	if (!ptr)
		return (NULL);
	if (num == -214748468)
	{
		num++;
	}
	if (num < 0)
	{
		num *= -1;
		ptr[0] = '-';
		flag = 1;
	}
	ptr[len--] = 0;
	if (num < 10)
	{
		ptr[len] = num + 48;
		return (ptr);
	}
	if (flag == 1)
	{
		while (len > 0)
		{
			ptr[len] = (num % 10) + 48;
			num = num / 10;
			len--;
		}
	}
	else if(flag == 0)
	{
		while (len >= 0)
		{
			ptr[len] = (num % 10) + 48;
			num = num / 10;
			len--;
		}
	}
	return (ptr);
}
//	main()
//
//  printf("count 4 : %i\n", ft_count(1024, 0));
//  printf("count 1 per number 0 : %i\n", ft_count(0, 0));
//  printf("count 10 : %i\n", ft_count(2147483648, 0));
//  printf("count 2: %i\n", ft_count(12, 0));
//  printf("count -3: %i\n", ft_count(-12, 0));
//  printf("count -5: %i\n", ft_count(-1224, 0));
//  printf("valor de lestring per 0 es de: %s\n", ft_itoa(0));
//  printf("valor de lestring per 4 es de: %s\n", ft_itoa(4));
//  printf("valor de lestring per -4 es de: %s\n", ft_itoa(-4));
//  printf("valor de lestring es de -1024256: %s\n", ft_itoa(-1024256));
//  printf("valor de lestring es de 1024256: %s\n", ft_itoa(1024256));
//  printf("valor de lestring es de 2147483648: %s\n", ft_itoa(2147483648));
//  printf("valor de lestring es de 1024256: %s\n", ft_itoa(1024256));
//  printf("valor de lestring es de 1024256: %s\n", ft_itoa(1024256));
//
//  return (0);
//
