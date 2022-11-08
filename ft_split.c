/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:45:37 by ccasadem          #+#    #+#             */
/*   Updated: 2022/11/08 16:17:28 by ccasadem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	w = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			j = 1;
			w++;
		}
		else if (s[i] == c)
		{
			j = 0;
		}
		i++;
	}
	return (w);
}

static void	ft_freemalloc(char **words, int w)
{
	int	i;

	i = 0;
	while (i <= w)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		w;
	char	**words;

	words = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	w = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s == '\0')
			break ;
		words[w] = (char *) malloc((ft_wordlen(s, c) + 1) * sizeof(char));
		if (words[w] == NULL)
		{
			ft_freemalloc(words, w);
			return (NULL);
		}
		ft_strlcpy(words[w], s, ft_wordlen(s, c) + 1);
		s = s + ft_wordlen(s, c);
		w++;
	}
	words[w] = 0;
	return (words);
}
