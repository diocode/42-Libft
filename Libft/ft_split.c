/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:21:23 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/09 09:37:19 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static int	ft_word_size(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static char	*ft_word(char **arr, char *s, int i, int j)
{
	char	*word;
	int		wsize;

	wsize = ft_word_size(s, c, i);
	word = ft_substr(s, i, wsize);
	if (!arr)
	{
		while (j >= 0)
			free(arr[j--]);
		free(arr);
		return (NULL);
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		i;
	int		j;
	int		wsize;
	char	**arr;

	words = ft_words(s, c);
	arr = (char **) malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	j = -1;
	while (j++ < words)
	{
		while (s[i] == c)
			i++;
		wsize = ft_word_size(s, c, i);
		arr[j] = ft_word(arr, (char *)s, wsize, i, j);
		i += wsize;
	}
	arr[j] = 0;
	return (arr);
}
