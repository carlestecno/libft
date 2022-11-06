#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strchr_meu(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			break ;
		}
		s++;
	}
	return ((char *)s);
}

size_t	ft_countwords(const char *str, char c)
{
	size_t	count;
	int		flag;

	flag = 0;
	count = 0;
	while (*str)
	{
		if (*str == c)
		{
			flag = 0;
		}
		else if (*str != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int			j;
	const char	*ps;
	char		**ptr;

	ptr = 0;
	ps = s;
	j = 0;
	if (*s == 0)
	{
		ptr = (char **) malloc(1 * sizeof(char *));
		ptr[0] = (char *) malloc(1);
		ptr[0] = '\0';
		ptr[1] = (char *) malloc(1);
		ptr[1] = 0;
		return (ptr);
	}
	ptr = (char **) malloc(ft_countwords(s, c) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (*ps)
	{
		if (*ps != c)
		{
			s = ps;
			ps = ft_strchr_meu(s, c);
			ptr[j] = (char *) malloc(ps - s + 1);
			ft_strncpy(ptr[j], s, ps - s);
			j++;
		}
		if (*ps == 0)
			return (ptr);
		ps++;
	}
	return (ptr);
}

// int main()
// {
//     printf("sizeofint:%i\n", sizeof(double));
// 	ft_split("abc cdd bab baba  za  z a ", ' ');
// }
